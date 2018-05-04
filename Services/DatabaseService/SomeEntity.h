#ifndef SOMEENTITY_H
#define SOMEENTITY_H

#include <QObject>

#include <Core/Defines.h>
#include <Core/Serialization/AbstractBinarySerializable.h>

class SomeEntity : public AbstractBinarySerializable
{
public:
    SomeEntity();

    PROP(bool, SomeBoolProperty)
    PROP(int, SomeIntProperty)
    PROP(QString, SomeStringProperty)

    // AbstractBinarySerializable interface
public:
    void toBinary(QByteArray &buffer) override;
    void fromBinary(QByteArray &buffer) override;
};

#endif // SOMEENTITY_H
