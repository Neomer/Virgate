#include "DataParsingException.h"

DataParsingException::DataParsingException(QString message) :
    BaseException(message)
{

}

DataParsingException::DataParsingException(int line, QString message) :
    BaseException(message),
    _Line(line)
{

}

DataParsingException::DataParsingException(int line, int offset, QString message) :
    BaseException(message),
    _Line(line),
    _Offset(offset)
{

}
