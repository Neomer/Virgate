#include "Actor.h"

Actor::Actor() :
    AbstractEntity()
{

}

Actor::Actor(const Actor &other) :
    AbstractEntity(other)
{

}

void Actor::toJson(QJsonObject &object)
{
    AbstractEntity::toJson(object);
}

void Actor::fromJson(const QJsonObject &object)
{
    AbstractEntity::fromJson(object);
}


QStringList Actor::getTableFields()
{
    return QStringList() << "Id";
}

QVariant Actor::getTableFieldValue(QString name)
{
    try
    {
        AbstractEntity::getTableFieldValue(name);
    }
    catch (UnknownFieldException)
    {
    }

    throw UnknownFieldException();
}
