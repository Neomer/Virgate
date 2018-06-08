#include "BaseException.h"


BaseException::BaseException(QString message) :
    _message(message)
{
}

BaseException::BaseException(const char *message) :
    _message(message)
{

}


void BaseException::raise() const
{
    throw *this;
}

QException *BaseException::clone() const
{
    return new BaseException(*this);
}



