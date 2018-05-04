#include "XmlSerializer.h"
#include "SerializationException.h"
#include <Core/Helpers/LogHelper.h>

void XmlSerializer::SerializeObjectToXml(AbstractXmlSerializable *object, QDomDocument &buffer)
{
    try
    {
        object->toXml(buffer);
    }
    catch (SerializationException &ex)
    {
        LogHelper::Instance().getCurrent()->write("Catch exception ");
        LogHelper::Instance().getCurrent()->writeLine(ex.getMessage());
    }
}
