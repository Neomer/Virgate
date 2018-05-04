#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H

#include "databaseservice_global.h"
#include <Core/Services/AbstractService.h>

class DATABASESERVICESHARED_EXPORT DatabaseService : public AbstractService
{
    Q_OBJECT

public:
    DatabaseService();

    // AbstractService interface
public:
    void Load() override;
    void Unload() override;
};

#endif // DATABASESERVICE_H
