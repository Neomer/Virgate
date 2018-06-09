#ifndef NOTIMPLEMENTEDEXCEPTION_H
#define NOTIMPLEMENTEDEXCEPTION_H

#include "BaseException.h"

#define NOT_IMPL    throw NotImplementedException( Q_FUNC_INFO );

///
/// \brief The NotImplementedException exception will be thrown when virtual method has no implementation
///
class EXCEPTIONSSHARED_EXPORT NotImplementedException : public BaseException
{
public:
    NotImplementedException();
    NotImplementedException(const char *methodName);
};

#endif // NOTIMPLEMENTEDEXCEPTION_H
