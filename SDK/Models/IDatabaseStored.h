#ifndef IDATABASESTORED_H
#define IDATABASESTORED_H

#include "models_global.h"
#include <QVariant>
#include <QJsonObject>

class MODELSSHARED_EXPORT IDatabaseStored
{
public:
    virtual QString getTableName() = 0;
    virtual QStringList getTableFields() = 0;
    virtual QVariant getTableFieldValue(QString name) = 0;
};

#endif // IDATABASESTORED_H
