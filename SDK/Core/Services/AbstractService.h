#ifndef ABSTRACTSERVICE_H
#define ABSTRACTSERVICE_H

#include <QThread>
#include <QList>

#include <Core/Guid/Guid.h>
#include "AbstractModule.h"
#include "AbstractConfiguration.h"

///
/// \brief The AbstractService class. <i>Абстрактный класс</i>. Должен быть реализован всеми сервисами. Предоставляет базовые функции для
/// сервиса, такие как загрузка, выгрузка и идентификатор модуля.
///
class SERVICESSHARED_EXPORT AbstractService : public QThread
{
    Q_OBJECT

public:
    enum InsertPositionType {
        enBefore,
        enAfter
    };

    AbstractService();
    ///
    /// \brief Load вызывается при инициализации сервиса. Служит для загрузки конфигурации и установки первоначальных значений.
    ///
    virtual void Load() = 0;
    ///
    /// \brief Unload вызывается при завершении работы сервиса. Выполняет сохранение текущей конфигурации сервиса.
    ///
    virtual void Unload() = 0;
    ///
    /// \brief ModuleId идентификатор модуля
    /// \return
    ///
    virtual const Guid &ModuleId() = 0;
    void start();
    ///
    /// \brief registerModule регистрирует новый модуль в сервисе последним в очереди на исполнение.
    /// \param module новый модуль
    ///
    void registerModule(AbstractModule *module);
    ///
    /// \brief registerModule регистрирует новый модуль в сервисе.
    /// \param before индекс, перед которым нужно поставить модуль на исполнение
    /// \param module новый модуль
    ///
    void registerModule(int before, AbstractModule *module);
    ///
    /// \brief registerModule регистрирует новый модуль в сервисе.
    /// \param module новый модуль
    /// \param moduleId идентификатор взаимосвязанного модуля
    /// \param position флаг вставлять до или после взаимосвязанного модуля
    ///
    void registerModule(AbstractModule *module, const Guid &moduleId, InsertPositionType position = InsertPositionType::enBefore);

    void loadConfiguration(QString configurationFileName);

    AbstractConfiguration *getConfiguration() { return _configuration; }

    // QThread interface
protected:
    void run() override;

private:
    QList<AbstractModule *> _modules;

protected:
    AbstractConfiguration *_configuration;
};

#endif // ABSTRACTSERVICE_H
