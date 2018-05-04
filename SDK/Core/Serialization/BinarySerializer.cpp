#include "BinarySerializer.h"
#include <QDebug>
#include "SerializationException.h"

void BinarySerializer::SerializeObjectToBinary(AbstractBinarySerializable *object, QByteArray &buffer)
{
    try
    {
        object->toBinary(buffer);
    }
    catch (SerializationException &ex)
    {
        qDebug() << "Catch exception" << ex.getMessage();
    }
}
