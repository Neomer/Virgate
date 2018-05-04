#ifndef RESOURCEACCESSEXCEPTION_H
#define RESOURCEACCESSEXCEPTION_H

#include "BaseException.h"

class EXCEPTIONSSHARED_EXPORT ResourceAccessException : public BaseException
{
public:
    ResourceAccessException(QString resourceName, QString message);

    PROP(QString, ResourceName)
};

#endif // RESOURCEACCESSEXCEPTION_H
