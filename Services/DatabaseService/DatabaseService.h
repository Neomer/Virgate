#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H

#include "databaseservice_global.h"
#include <Core/Services/AbstractService.h>
#include "DatabaseServiceConfiguration.h"

class DATABASESERVICESHARED_EXPORT DatabaseService : public AbstractService
{
    Q_OBJECT

public:
    DatabaseService(QString configFilename);

    // AbstractService interface
public:
    void Load() override;
    void Unload() override;
    const Guid &ModuleId() override { return _moduleId; }

private:
    DatabaseServiceConfiguration _config;
    QString _configFilename;
    Guid _moduleId;
};

#endif // DATABASESERVICE_H
