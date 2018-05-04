#include "BinarySerializer.h"
#include <QDebug>
#include "SerializationException.h"
#include <Core/Helpers/LogHelper.h>

void BinarySerializer::SerializeObjectToBinary(AbstractBinarySerializable *object, QByteArray &buffer)
{
    try
    {
        object->toBinary(buffer);
    }
    catch (SerializationException &ex)
    {
        LogHelper::Instance().getCurrent()->write("Catch exception ");
        LogHelper::Instance().getCurrent()->writeLine(ex.getMessage());
    }
}
