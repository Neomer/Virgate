#ifndef ABSTRACTCONFIGURATION_H
#define ABSTRACTCONFIGURATION_H

#include "services_global.h"

#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>

class SERVICESSHARED_EXPORT AbstractConfiguration : public AbstractJsonSerializable
{
public:
    AbstractConfiguration();

    PROP(bool, IsLoad)

    virtual QString getConfigurationSection() = 0;

    // AbstractJsonSerializable interface
public:
    void fromJson(const QJsonObject &object) override;
};

#endif // ABSTRACTCONFIGURATION_H
