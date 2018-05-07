#ifndef AUTHENTICATIONSERVICECONFIGURATION_H
#define AUTHENTICATIONSERVICECONFIGURATION_H

#include <Core/Defines.h>
#include <Core/Services/AbstractConfiguration.h>

class AuthenticationServiceConfiguration : public AbstractConfiguration
{
public:
    AuthenticationServiceConfiguration();

    PROP(quint16, Port)

    // AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;

    // AbstractConfiguration interface
public:
    QString getConfigurationSection() override { return "AuthenticationService"; }
};

#endif // AUTHENTICATIONSERVICECONFIGURATION_H
