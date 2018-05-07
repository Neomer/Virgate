#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

#include "models_global.h"
#include <Core/Defines.h>
#include <Core/Guid/Guid.h>

class MODELSSHARED_EXPORT AbstractEntity
{
public:
    AbstractEntity();

    PROP(Guid, Id)
};

#endif // ABSTRACTENTITY_H
