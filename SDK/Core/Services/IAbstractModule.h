#ifndef IABSTRACTMODULE_H
#define IABSTRACTMODULE_H

#include "services_global.h"
#include <QThread>
#include <Core/Guid/Guid.h>

class SERVICESSHARED_EXPORT IAbstractModule : private QThread
{

public:
    IAbstractModule();

    virtual void exec() = 0;
    virtual Guid moduleId() = 0;

    // QThread interface
protected:
    void run() override;
};

#endif // IABSTRACTMODULE_H
