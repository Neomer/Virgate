#include "AbstractEntity.h"


AbstractEntity::AbstractEntity() :
    QObject()
{

}

AbstractEntity::AbstractEntity(const AbstractEntity &other) :
    QObject()
{
    _Id = other._Id;
}

void AbstractEntity::toJson(QJsonObject &object)
{
    object["typeUid"] = getEntityTypeId().toString();
    object["Id"] = getId().toString();
}

void AbstractEntity::fromJson(const QJsonObject &object)
{
    bool ok = true;
    setId(Guid::Parse(object["Id"].toString(), &ok));

    if (!ok)
    {
        throw new SerializationException("Data parsing error!");
    }
}
