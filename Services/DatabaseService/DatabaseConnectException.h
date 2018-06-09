#ifndef DATABASECONNECTEXCEPTION_H
#define DATABASECONNECTEXCEPTION_H

#include <Core/Exceptions/ResourceAccessException.h>

class DatabaseConnectException : public ResourceAccessException
{
public:
    DatabaseConnectException(QString host, quint16 port, QString databaseName);
    DatabaseConnectException(QString username, QString password, QString host, quint16 port, QString databaseName);

    PROP(QString, Host)
    PROP(quint16, Port)
    PROP(QString, Database)
};

#endif // DATABASECONNECTEXCEPTION_H
