#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H

#include <memory>
#include <Core/Defines.h>

#include "AbstractEntity.h"

class MODELSSHARED_EXPORT AbstractEntityFactory
{
    SINGLETON(AbstractEntityFactory)

public:
    std::shared_ptr<AbstractEntity> CreateEntity(const char *typeName);
};

#endif // ABSTRACTENTITYFACTORY_H
