#ifndef ABSTRACTJSONSERIALIZABLE_H
#define ABSTRACTJSONSERIALIZABLE_H

#include <QJsonObject>

#include "serialization_global.h"

class SERIALIZATIONSHARED_EXPORT AbstractJsonSerializable
{
public:
    virtual void toJson(QJsonObject &object) = 0;
    virtual void fromJson(const QJsonObject &object) = 0;
};


#endif // ABSTRACTJSONSERIALIZABLE_H
