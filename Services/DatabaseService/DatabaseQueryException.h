#ifndef DATABASEQUERYEXCEPTION_H
#define DATABASEQUERYEXCEPTION_H

#include <Core/Exceptions/DataParsingException.h>

class DatabaseQueryException : public DataParsingException
{
public:
    DatabaseQueryException(QString message);
};

#endif // DATABASEQUERYEXCEPTION_H
