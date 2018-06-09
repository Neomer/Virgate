#ifndef DATABASECONFIGURATION_H
#define DATABASECONFIGURATION_H

#include "databaseservice_global.h"
#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>
#include <Core/Services/AbstractConfiguration.h>

class DATABASESERVICESHARED_EXPORT DatabaseConfiguration : public AbstractJsonSerializable
{
public:
    DatabaseConfiguration();

    PROP(QString, Host)
    PROP(quint16, Port)
    PROP(QString, Username)
    PROP(QString, Password)
    PROP(QString, Database)

    // AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;
};

#endif // DATABASECONFIGURATION_H
