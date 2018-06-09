#include "DatabaseConfiguration.h"

DatabaseConfiguration::DatabaseConfiguration()
{

}


void DatabaseConfiguration::toJson(QJsonObject &object)
{
    object["host"] = getHost();
    object["port"] = getPort();
    object["username"] = getUsername();
    object["password"] = getPassword();
    object["database"] = getDatabase();
}

void DatabaseConfiguration::fromJson(const QJsonObject &object)
{

    setHost(object["host"].toString());
    setPort(object["port"].toInt());
    setUsername(object["username"].toString());
    setPassword(object["password"].toString());
    setDatabase(object["database"].toString());
}

