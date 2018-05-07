#ifndef ABSTRACTCONFIGURATION_H
#define ABSTRACTCONFIGURATION_H

#include "services_global.h"

#include <Core/Serialization/AbstractJsonSerializable.h>

class SERVICESSHARED_EXPORT AbstractConfiguration : public AbstractJsonSerializable
{
public:
    AbstractConfiguration();

    virtual QString getConfigurationSection() = 0;
};

#endif // ABSTRACTCONFIGURATION_H
