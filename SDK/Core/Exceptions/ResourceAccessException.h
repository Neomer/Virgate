#ifndef RESOURCEACCESSEXCEPTION_H
#define RESOURCEACCESSEXCEPTION_H

#include "BaseException.h"

///
/// \brief The ResourceAccessException exception will be thrown when no access to any resource, such as files, network service etc
///
class EXCEPTIONSSHARED_EXPORT ResourceAccessException : public BaseException
{
public:
    ResourceAccessException(QString resourceName, QString message);

    PROP(QString, ResourceName)
};

#endif // RESOURCEACCESSEXCEPTION_H
