#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

#include <QObject>

#include "models_global.h"
#include <Core/Defines.h>
#include <Core/Guid/Guid.h>


class MODELSSHARED_EXPORT AbstractEntity : public QObject
{
    Q_OBJECT

public:
    AbstractEntity();

    PROP(Guid, Id)

    virtual Guid getEntityTypeId() = 0;
};

#endif // ABSTRACTENTITY_H
