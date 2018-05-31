#ifndef UNKNOWNFIELDEXCEPTION_H
#define UNKNOWNFIELDEXCEPTION_H

#include <Core/Exceptions/BaseException.h>

class UnknownFieldException : public BaseException
{
public:
    UnknownFieldException();
    UnknownFieldException(const char *message);
};

#endif // UNKNOWNFIELDEXCEPTION_H
