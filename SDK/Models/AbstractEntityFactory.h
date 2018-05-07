#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H

#include <memory>
#include <Core/Defines.h>

#include "AbstractEntity.h"

class MODELSSHARED_EXPORT AbstractEntityFactory
{
public:
    AbstractEntityFactory();
    std::shared_ptr<AbstractEntity> CreateEntity(Guid typeId);
};

#endif // ABSTRACTENTITYFACTORY_H
