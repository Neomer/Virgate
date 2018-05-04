#ifndef IABSTRACTMODULE_H
#define IABSTRACTMODULE_H

#include "services_global.h"
#include <QThread>
#include <Core/Guid/Guid.h>

class SERVICESSHARED_EXPORT AbstractModule
{

public:
    AbstractModule();

    virtual void exec() = 0;
    virtual Guid moduleId() = 0;
};

#endif // IABSTRACTMODULE_H
