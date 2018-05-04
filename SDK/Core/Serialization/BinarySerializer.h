#ifndef BINARYSERIALIZER_H
#define BINARYSERIALIZER_H

#include <QObject>

#include "serialization_global.h"
#include "AbstractBinarySerializable.h"

class SERIALIZATIONSHARED_EXPORT BinarySerializer
{
public:
    static void SerializeObjectToBinary(AbstractBinarySerializable *object, QByteArray &buffer);

private:
    BinarySerializer() = delete;
    ~BinarySerializer() = delete;
    BinarySerializer(const BinarySerializer &other) = delete;
};

#endif // BINARYSERIALIZER_H
