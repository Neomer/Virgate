#ifndef DATAPARSINGEXCEPTION_H
#define DATAPARSINGEXCEPTION_H

#include "BaseException.h"

class EXCEPTIONSSHARED_EXPORT DataParsingException : public BaseException
{
public:
    DataParsingException(QString message);
    DataParsingException(int line, QString message);
    DataParsingException(int line, int offset, QString message);

    PROP(int, Line)
    PROP(int, Offset)
};

#endif // DATAPARSINGEXCEPTION_H
