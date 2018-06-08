#ifndef POSTGRESCONNECTION_H
#define POSTGRESCONNECTION_H

#include "../AbstractDatabaseConnection.h"

class DATABASESERVICESHARED_EXPORT PostgresConnection : public AbstractDatabaseConnection
{
public:
    PostgresConnection();

    // AbstractDatabaseConnection interface
public:
    bool open() override;
    void close() override;
    AbstractDatabaseQuery* exec(QString sql) override;
};

#endif // POSTGRESCONNECTION_H
