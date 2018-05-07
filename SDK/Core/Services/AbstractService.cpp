#include <QFile>
#include <QJsonDocument>

#include <Core/Exceptions/DataFormatException.h>
#include <Core/Exceptions/DataParsingException.h>
#include <Core/Exceptions/ResourceAccessException.h>

#include "AbstractService.h"


AbstractService::AbstractService() :
    _configuration(nullptr)
{

}

void AbstractService::start()
{
    QThread::start();
}

void AbstractService::registerModule(AbstractModule *module)
{
    _modules.push_back(module);
}

void AbstractService::registerModule(int before, AbstractModule *module)
{
    _modules.insert(before, module);
}

void AbstractService::loadConfiguration(QString configurationFileName)
{
    if (_configuration == nullptr)
    {

    }

    QFile file(configurationFileName);
    if (!file.exists())
    {
        throw ResourceAccessException(configurationFileName, "Файл конфигурации не найден!");
    }
    if (!file.open(QIODevice::ReadOnly))
    {
        throw ResourceAccessException(configurationFileName, "Файл конфигурации недоступен для чтения!");
    }
    QJsonParseError err;
    QJsonDocument json = QJsonDocument::fromJson(file.readAll(), &err);
    file.close();
    if (err.error != QJsonParseError::NoError)
    {
        throw DataParsingException(0, err.offset, err.errorString());
    }
    if (!json.isObject() || !json.object().contains(_configuration->getConfigurationSection()))
    {
        throw DataFormatException(QString("В файле конфигурации не обнаружены настройки для сервиса аутентификации!"));
    }
    _configuration->fromJson(json.object()["AuthenticationService"].toObject());
}


void AbstractService::run()
{
    forever
    {
        foreach (auto m, _modules)
        {
            m->exec();
        }
    }
}
