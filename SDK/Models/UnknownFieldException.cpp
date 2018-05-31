#include "UnknownFieldException.h"

UnknownFieldException::UnknownFieldException() :
    BaseException("")
{

}

UnknownFieldException::UnknownFieldException(const char *message) :
    BaseException(message)
{

}
