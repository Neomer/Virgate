#ifndef DATAFORMATEXCEPTION_H
#define DATAFORMATEXCEPTION_H

#include <QString>

#include "BaseException.h"

class EXCEPTIONSSHARED_EXPORT DataFormatException : public BaseException
{
public:
    DataFormatException(QString message);
    DataFormatException(const char *message);
};

#endif // DATAFORMATEXCEPTION_H
