#include "JsonSerializer.h"
#include <typeinfo>
#include <QFile>
#include <QJsonDocument>

#include "SerializationException.h"
#include <Core/Helpers/LogHelper.h>
#include <Core/Exceptions/ResourceAccessException.h>

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

void JsonSerializer::SaveToFile(QJsonObject &object, QString fileName)
{
    QJsonDocument json(object);
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly))
    {
        throw ResourceAccessException(fileName, "Файл недоступен для записи!");
    }
    file.write(json.toJson());
    file.close();
}
