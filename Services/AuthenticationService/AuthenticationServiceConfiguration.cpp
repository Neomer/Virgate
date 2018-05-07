#include "AuthenticationServiceConfiguration.h"

AuthenticationServiceConfiguration::AuthenticationServiceConfiguration()
{

}


void AuthenticationServiceConfiguration::toJson(QJsonObject &object)
{
    object["port"] = getPort();
}

void AuthenticationServiceConfiguration::fromJson(const QJsonObject &object)
{
    setPort(object["port"].toInt());
}
