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

private:
    QString _configFilename;
    DatabaseServiceConfiguration _config;
};

#endif // DATABASESERVICE_H
