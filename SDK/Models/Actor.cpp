#include "Actor.h"

Actor::Actor() :
    AbstractEntity()
{

}

Actor::Actor(const Actor &other)
{

}

void Actor::toJson(QJsonObject &object)
{
    AbstractEntity::toJson(object);
}

void Actor::fromJson(const QJsonObject &object)
{
    AbstractEntity::fromJson(object);
}
