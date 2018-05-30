#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

#include <QObject>

#include "models_global.h"
#include <Core/Defines.h>
#include <Core/Guid/Guid.h>
#include <Core/Serialization/AbstractJsonSerializable.h>
#include <Core/Serialization/SerializationException.h>

class MODELSSHARED_EXPORT AbstractEntity :
        public QObject,
        public AbstractJsonSerializable
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
};

#endif // ABSTRACTENTITY_H
