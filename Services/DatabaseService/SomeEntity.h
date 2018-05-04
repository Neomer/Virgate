#ifndef SOMEENTITY_H
#define SOMEENTITY_H

#include <QObject>

#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>

class SomeEntity : public AbstractJsonSerializable
{
public:
    SomeEntity();

    PROP(bool, SomeBoolProperty)
    PROP(int, SomeIntProperty)
    PROP(QString, SomeStringProperty)

    // AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;
};

#endif // SOMEENTITY_H
