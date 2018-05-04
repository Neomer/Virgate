#ifndef ABSTRACTXMLSERIALIZABLE_H
#define ABSTRACTXMLSERIALIZABLE_H


#include "serialization_global.h"

class SERIALIZATIONSHARED_EXPORT AbstractXmlSerializable
{
public:
    virtual void toXml() = 0;
    virtual void fromXml() = 0;
};

#endif // ABSTRACTXMLSERIALIZABLE_H
