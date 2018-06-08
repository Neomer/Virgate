#ifndef DATAPARSINGEXCEPTION_H
#define DATAPARSINGEXCEPTION_H

#include "BaseException.h"

///
/// \brief The DataParsingException exception will be thrown when occure any errors during data parsing
///
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
