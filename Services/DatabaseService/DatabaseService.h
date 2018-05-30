#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H

#include "databaseservice_global.h"
#include <Core/Services/AbstractService.h>
#include "DatabaseServiceConfiguration.h"

#include <Models/IDatabaseStored.h>
#include <Models/AbstractEntity.h>

class DATABASESERVICESHARED_EXPORT DatabaseService : public AbstractService
{
    Q_OBJECT

public:
    DatabaseService();

    // AbstractService interface
public:
    void Load() override;
    void Unload() override;
    const Guid &ModuleId() override { return _moduleId; }

    void SaveEntityImmediatly(AbstractEntity *entity);
    void SaveEntity(AbstractEntity *entity);

private:
    Guid _moduleId;
};

#endif // DATABASESERVICE_H
