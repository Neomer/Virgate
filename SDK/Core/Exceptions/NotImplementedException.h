#ifndef NOTIMPLEMENTEDEXCEPTION_H
#define NOTIMPLEMENTEDEXCEPTION_H

#include "BaseException.h"

///
/// \brief The NotImplementedException exception will be thrown when virtual method has no implementation
///
class EXCEPTIONSSHARED_EXPORT NotImplementedException : public BaseException
{
public:
    NotImplementedException();
};

#endif // NOTIMPLEMENTEDEXCEPTION_H
