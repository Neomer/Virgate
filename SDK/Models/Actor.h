#ifndef ACTOR_H
#define ACTOR_H

#include "AbstractEntity.h"

class MODELSSHARED_EXPORT Actor : public AbstractEntity
{
    Q_OBJECT

public:
    Actor();
    Actor(const Actor &other);

    // AbstractEntity interface
public:
    Guid getEntityTypeId() override { return Guid::Parse("a378bd10-ed5a-48e1-b888-30f944228c94"); }
};

Q_DECLARE_METATYPE(Actor)

#endif // ACTOR_H
