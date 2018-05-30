#ifndef IDATABASESTORED_H
#define IDATABASESTORED_H

#include "models_global.h"

class MODELSSHARED_EXPORT IDatabaseStored
{
public:
    virtual QString getTableName() = 0;
};

#endif // IDATABASESTORED_H
