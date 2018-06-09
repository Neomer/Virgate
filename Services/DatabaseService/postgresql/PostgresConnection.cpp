#include "PostgresConnection.h"
#include "PostgresQuery.h"
#include <Core/Helpers/StringHelper.h>
#include "DatabaseServiceConfiguration.h"

PostgresConnection::PostgresConnection() :
    _connection(nullptr)
{

}


bool PostgresConnection::open()
{
    Q_ASSERT(getConfiguration()->getIsLoad());

    auto cfg = static_cast<DatabaseServiceConfiguration *>(getConfiguration())->getDatabaseConfiguration();

    _connection = PQsetdbLogin(
                StringHelper::StringToConstChar(cfg.getHost()),
                StringHelper::StringToConstChar(QString::number(cfg.getPort())),
                "",
                "",
                StringHelper::StringToConstChar(cfg.getDatabase()),
                StringHelper::StringToConstChar(cfg.getUsername()),
                StringHelper::StringToConstChar(cfg.getPassword()));

    if (PQstatus(_connection) == CONNECTION_BAD)
    {
        throw DatabaseConnectException(
                    cfg.getUsername(),
                    cfg.getPassword(),
                    cfg.getHost(),
                    cfg.getPort(),
                    cfg.getDatabase());
    }
    return true;
}

void PostgresConnection::close()
{
    if (_connection == nullptr)
        return;

    PQfinish(_connection);
}

AbstractDatabaseQuery *PostgresConnection::exec(QString sql)
{
    Q_ASSERT(_connection != nullptr);
    return new PostgresQuery(PQexec(_connection, StringHelper::StringToConstChar(sql)));
}
