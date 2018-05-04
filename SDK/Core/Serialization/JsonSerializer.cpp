#include "JsonSerializer.h"
#include "SerializationException.h"
#include <Core/Helpers/LogHelper.h>
#include <typeinfo>

void JsonSerializer::SerializeObjectToJson(AbstractJsonSerializable *object, QJsonObject &buffer)
{
    try
    {
        buffer["className"] = typeid(object).name();
        object->toJson(buffer);
    }
    catch (SerializationException &ex)
    {
        LogHelper::Instance().getCurrent()->write("Catch exception ");
        LogHelper::Instance().getCurrent()->writeLine(ex.getMessage());
    }
}
