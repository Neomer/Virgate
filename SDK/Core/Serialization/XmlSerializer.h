#ifndef XMLSERIALIZER_H
#define XMLSERIALIZER_H

#include <QDomDocument>
#include <Core/Defines.h>
#include "AbstractXmlSerializable.h"

class XmlSerializer
{
    STATIC(XmlSerializer)

public:
    static void SerializeObjectToXml(AbstractXmlSerializable *object, QDomDocument &buffer);

};

#endif // XMLSERIALIZER_H
