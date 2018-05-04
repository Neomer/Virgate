#ifndef DATABASESERVICECONFIGURATION_H
#define DATABASESERVICECONFIGURATION_H

#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>
#include "DatabaseConfiguration.h"

class DatabaseServiceConfiguration : public AbstractJsonSerializable
{
public:
    DatabaseServiceConfiguration();

    PROP_LINK(DatabaseConfiguration, DatabaseConfiguration)

// AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;
};

#endif // DATABASESERVICECONFIGURATION_H
