#include "DatabaseServiceConfiguration.h"

DatabaseServiceConfiguration::DatabaseServiceConfiguration() :
    AbstractConfiguration()
{

}


void DatabaseServiceConfiguration::toJson(QJsonObject &object)
{
    QJsonObject dbObj;
    getDatabaseConfiguration().toJson(dbObj);

    object["database"] = dbObj;
}

void DatabaseServiceConfiguration::fromJson(const QJsonObject &object)
{
    DatabaseConfiguration cfg;
    QJsonObject dbObj = object["database"].toObject();
    cfg.fromJson(dbObj);
    setDatabaseConfiguration(cfg);
}
