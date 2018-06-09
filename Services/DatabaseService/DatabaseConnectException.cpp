#include "DatabaseConnectException.h"

DatabaseConnectException::DatabaseConnectException(QString host, quint16 port, QString databaseName) :
    ResourceAccessException(host + ":" + QString::number(port) + "/" + databaseName, ""),
    _Host(host),
    _Port(port),
    _Database(databaseName)
{

}

DatabaseConnectException::DatabaseConnectException(QString username, QString password, QString host, quint16 port, QString databaseName) :
    ResourceAccessException(username + ":" + password + "@" + host + ":" + QString::number(port) + "/" + databaseName, ""),
    _Host(host),
    _Port(port),
    _Database(databaseName)
{

}
