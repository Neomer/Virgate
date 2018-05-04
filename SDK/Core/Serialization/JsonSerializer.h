#ifndef JSONSERIALIZER_H
#define JSONSERIALIZER_H

#include <Core/Defines.h>
#include "AbstractJsonSerializable.h"

class JsonSerializer
{
    STATIC(JsonSerializer)

public:
    static void SerializeObjectToJson(AbstractJsonSerializable *object, QJsonObject &buffer);
    static void SaveToFile(QJsonObject &object, QString fileName);
};

#endif // JSONSERIALIZER_H
