#ifndef JSONSERIALIZER_H
#define JSONSERIALIZER_H

#include <Core/Defines.h>
#include "AbstractJsonSerializable.h"

class JsonSerializer
{
    STATIC(JsonSerializer)

public:
    static void SerializeObjectToJson(AbstractJsonSerializable *object, QJsonObject &buffer);
};

#endif // JSONSERIALIZER_H
