#ifndef DATAFORMATEXCEPTION_H
#define DATAFORMATEXCEPTION_H

#include <QString>

#include "BaseException.h"

///
/// \brief The DataFormatException exception will be thrown when occure any errors in input or output parameters.
///
class EXCEPTIONSSHARED_EXPORT DataFormatException : public BaseException
{
public:
    DataFormatException(QString message);
    DataFormatException(const char *message);
};

#endif // DATAFORMATEXCEPTION_H
