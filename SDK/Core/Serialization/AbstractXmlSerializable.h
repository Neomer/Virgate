#ifndef ABSTRACTXMLSERIALIZABLE_H
#define ABSTRACTXMLSERIALIZABLE_H

#include <QDomDocument>

#include "serialization_global.h"

class SERIALIZATIONSHARED_EXPORT AbstractXmlSerializable
{
public:
    virtual void toXml(QDomDocument &buffer) = 0;
    virtual void fromXml(const QDomDocument &buffer) = 0;
};

#endif // ABSTRACTXMLSERIALIZABLE_H
