#ifndef DATABASESERVICECONFIGURATION_H
#define DATABASESERVICECONFIGURATION_H

#include "databaseservice_global.h"
#include <Core/Defines.h>
#include <Core/Services/AbstractConfiguration.h>
#include "DatabaseConfiguration.h"

class DATABASESERVICESHARED_EXPORT DatabaseServiceConfiguration : public AbstractConfiguration
{
public:
    DatabaseServiceConfiguration();

    PROP_LINK(DatabaseConfiguration, DatabaseConfiguration)

// AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;

    // AbstractConfiguration interface
public:
    QString getConfigurationSection() override { return "DatabaseService"; }
};

#endif // DATABASESERVICECONFIGURATION_H
