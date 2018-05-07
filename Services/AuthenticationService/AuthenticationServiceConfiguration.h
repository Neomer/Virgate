#ifndef AUTHENTICATIONSERVICECONFIGURATION_H
#define AUTHENTICATIONSERVICECONFIGURATION_H

#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>

class AuthenticationServiceConfiguration : public AbstractJsonSerializable
{
public:
    AuthenticationServiceConfiguration();

    PROP(quint16, Port)

    // AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;
};

#endif // AUTHENTICATIONSERVICECONFIGURATION_H
