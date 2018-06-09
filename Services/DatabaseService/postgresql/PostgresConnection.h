#ifndef POSTGRESCONNECTION_H
#define POSTGRESCONNECTION_H

#include <libpq-fe.h>

#include "../AbstractDatabaseConnection.h"

#include "DatabaseConnectException.h"

class DATABASESERVICESHARED_EXPORT PostgresConnection : public AbstractDatabaseConnection
{
public:
    PostgresConnection();

    // AbstractDatabaseConnection interface
public:
    bool open() override;
    void close() override;
    AbstractDatabaseQuery* exec(QString sql) override;

private:
    PGconn *_connection;
};

#endif // POSTGRESCONNECTION_H
