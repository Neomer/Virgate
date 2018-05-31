#include <QFile>
#include <QJsonDocument>
#include <QJsonParseError>

#include "DatabaseService.h"
#include <Core/Serialization/JsonSerializer.h>

#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>

#include "postgresql/PostgresConnection.h"

DatabaseService::DatabaseService() :
    AbstractService(),
    _moduleId(Guid::Parse("6ab87c0b-7c8c-49e9-8ed9-fae2c481bd34"))
{
    _configuration = new DatabaseServiceConfiguration();
}


void DatabaseService::Load()
{
    _connection->open();
}

void DatabaseService::Unload()
{
    _connection->close();
}

void DatabaseService::SaveEntityImmediatly(AbstractEntity *entity)
{
}

void DatabaseService::SaveEntity(AbstractEntity *entity)
{

}
