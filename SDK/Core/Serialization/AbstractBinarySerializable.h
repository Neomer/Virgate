#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include "serialization_global.h"
#include "SerializationException.h"

class SERIALIZATIONSHARED_EXPORT AbstractBinarySerializable
{
public:
    virtual void toBinary(QByteArray &buffer) = 0;
    virtual void fromBinary(const QByteArray &buffer) = 0;
};

#endif // SERIALIZATION_H
