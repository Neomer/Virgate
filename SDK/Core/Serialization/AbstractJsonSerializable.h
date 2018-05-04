#ifndef ABSTRACTJSONSERIALIZABLE_H
#define ABSTRACTJSONSERIALIZABLE_H

#include "serialization_global.h"

class SERIALIZATIONSHARED_EXPORT AbstractJsonSerializable
{
public:
    virtual void toJson() = 0;
    virtual void fromJson() = 0;
};


#endif // ABSTRACTJSONSERIALIZABLE_H
