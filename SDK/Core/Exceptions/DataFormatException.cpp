#include "DataFormatException.h"

DataFormatException::DataFormatException(QString message) : BaseException(message)
{

}

DataFormatException::DataFormatException(const char *message) : BaseException(message)
{

}
