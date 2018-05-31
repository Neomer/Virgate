#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

#include <QObject>

#include "models_global.h"
#include "IDatabaseStored.h"
#include "UnknownFieldException.h"

#include <Core/Defines.h>
#include <Core/Guid/Guid.h>
#include <Core/Serialization/AbstractJsonSerializable.h>
#include <Core/Serialization/SerializationException.h>

class MODELSSHARED_EXPORT AbstractEntity :
        public QObject,
        public AbstractJsonSerializable,
        public IDatabaseStored
{
    Q_OBJECT

public:
    AbstractEntity();
    AbstractEntity(const AbstractEntity &other);

    PROP(Guid, Id)

    virtual Guid getEntityTypeId() = 0;

    // AbstractJsonSerializable interface
public:
    virtual void toJson(QJsonObject &object) override;
    virtual void fromJson(const QJsonObject &object) override;

    // IDatabaseStored interface
public:
    QStringList getTableFields() override;
    QVariant getTableFieldValue(QString name) override;
};

#endif // ABSTRACTENTITY_H
