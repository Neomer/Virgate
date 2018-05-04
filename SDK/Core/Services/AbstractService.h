#ifndef ABSTRACTSERVICE_H
#define ABSTRACTSERVICE_H

#include <QThread>
#include <QList>

#include <Core/Guid/Guid.h>
#include "AbstractModule.h"

class AbstractService : private QThread
{
    Q_OBJECT

public:
    AbstractService();

    void registerModule(AbstractModule *module);

    // QThread interface
protected:
    void run() override;

private:
    QList<AbstractModule *> _modules;
};

#endif // ABSTRACTSERVICE_H
