#include "DatabaseQueryException.h"

DatabaseQueryException::DatabaseQueryException(QString message) :
    DataParsingException("SQL query error: " + message)
{

}
