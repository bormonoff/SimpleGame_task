#pragma once

#include "Creature.h"

class Monster : public Creature
{
public:

enum Type
{
    Leviathan,
    Skeleton,
    Zombie,
    Max_types
};

Monster(Type); 

static Monster GetRandomMonster();

private:

static Creature arr[Type::Max_types];
static const Creature& GetMonster(Type);

};