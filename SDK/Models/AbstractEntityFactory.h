#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H

#include <memory>
#include <Core/Defines.h>

#include "AbstractEntity.h"

class MODELSSHARED_EXPORT AbstractEntityFactory
{
    SINGLETON(AbstractEntityFactory)

public:
    template <typename T> T* CreateEntity(const char *typeName)
    {
        auto type = QMetaType::type(typeName);
        if (type == QMetaType::UnknownType)
        {
            return nullptr;
        }
        return (T *)QMetaType::create(type);
    }
};

#endif // ABSTRACTENTITYFACTORY_H
