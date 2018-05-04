#include "SomeEntity.h"
#include <QDataStream>

SomeEntity::SomeEntity()
{

}

void SomeEntity::toJson(QJsonObject &object)
{
    object["bool_property"] = getSomeBoolProperty();
    object["int_property"] = getSomeIntProperty();
    object["string_property"] = getSomeStringProperty();
}

void SomeEntity::fromJson(const QJsonObject &object)
{
    setSomeBoolProperty(object["bool_property"].toBool());
    setSomeIntProperty(object["int_property"].toInt());
    setSomeStringProperty(object["string_property"].toString());
}
