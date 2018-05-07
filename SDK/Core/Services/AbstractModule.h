#ifndef IABSTRACTMODULE_H
#define IABSTRACTMODULE_H

#include "services_global.h"
#include <QThread>
#include <Core/Guid/Guid.h>

///
/// \brief The AbstractModule class. <i>Абстрактный класс</i>.
///
class SERVICESSHARED_EXPORT AbstractModule
{

public:
    AbstractModule();
    ///
    /// \brief exec запускает выполнение модуля
    ///
    virtual void exec() = 0;
    ///
    /// \brief moduleId идентификатор модуля
    /// \return
    ///
    virtual Guid moduleId() = 0;
};

#endif // IABSTRACTMODULE_H
