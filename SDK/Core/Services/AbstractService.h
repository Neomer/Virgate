#ifndef ABSTRACTSERVICE_H
#define ABSTRACTSERVICE_H

#include <QThread>
#include <QList>

#include <Core/Guid/Guid.h>
#include "AbstractModule.h"

class SERVICESSHARED_EXPORT AbstractService : public QThread
{
    Q_OBJECT

public:
    AbstractService();

    ///
    /// \brief Load Выполняет всю первоначальную загрузку сервиса
    ///
    virtual void Load() = 0;
    ///
    /// \brief Unload Выполняет все необходимые операции при завершении сервиса
    ///
    virtual void Unload() = 0;

    void start();
    void registerModule(AbstractModule *module);

    // QThread interface
protected:
    void run() override;

private:
    QList<AbstractModule *> _modules;
};

#endif // ABSTRACTSERVICE_H
