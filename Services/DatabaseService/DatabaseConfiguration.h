#ifndef DATABASECONFIGURATION_H
#define DATABASECONFIGURATION_H

#include <Core/Defines.h>
#include <Core/Serialization/AbstractJsonSerializable.h>

class DatabaseConfiguration : public AbstractJsonSerializable
{
public:
    DatabaseConfiguration();

    PROP(QString, Host)
    PROP(quint16, Port)
    PROP(QString, Username)
    PROP(QString, Password)

    // AbstractJsonSerializable interface
public:
    void toJson(QJsonObject &object) override;
    void fromJson(const QJsonObject &object) override;
};

#endif // DATABASECONFIGURATION_H
