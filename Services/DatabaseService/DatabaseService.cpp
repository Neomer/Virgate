#include <QFile>
#include <QJsonDocument>
#include <QJsonParseError>

#include "DatabaseService.h"
#include <Core/Serialization/JsonSerializer.h>

#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>

DatabaseService::DatabaseService(QString configFilename) :
    AbstractService(),
    _configFilename(configFilename),
  _moduleId(Guid::Parse("6ab87c0b-7c8c-49e9-8ed9-fae2c481bd34"))
{

}


void DatabaseService::Load()
{
    QFile file(_configFilename);
    if (!file.exists())
    {
        throw ResourceAccessException(_configFilename, "Файл конфигурации не найден!");
    }
    if (!file.open(QIODevice::ReadOnly))
    {
        throw ResourceAccessException(_configFilename, "Файл конфигурации недоступен для чтения!");
    }
    QJsonParseError err;
    QJsonDocument json = QJsonDocument::fromJson(file.readAll(), &err);
    file.close();
    if (err.error != QJsonParseError::NoError)
    {
        throw DataParsingException(0, err.offset, err.errorString());
    }
    _config.fromJson(json.object());
}

void DatabaseService::Unload()
{

}
