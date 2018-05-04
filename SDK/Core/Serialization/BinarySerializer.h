#ifndef BINARYSERIALIZER_H
#define BINARYSERIALIZER_H

#include <QObject>

#include <Core/Defines.h>
#include "serialization_global.h"
#include "AbstractBinarySerializable.h"

class SERIALIZATIONSHARED_EXPORT BinarySerializer
{
    STATIC(BinarySerializer)

public:
    static void SerializeObjectToBinary(AbstractBinarySerializable *object, QByteArray &buffer);
};

#endif // BINARYSERIALIZER_H
