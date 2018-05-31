#include "PostgresConnection.h"
#include "PostgresQuery.h"

PostgresConnection::PostgresConnection()
{

}


bool PostgresConnection::open()
{
    throw NotImplementedException();
}

void PostgresConnection::close()
{
    throw NotImplementedException();
}

AbstractDatabaseQuery *PostgresConnection::exec(QString sql)
{
    throw NotImplementedException();
}
