#include "include/Monster.h"

Monster::Monster(Type t)
    : Creature(GetMonster(t))
{
    
}

const Creature& Monster::GetMonster(Type t)
{
       return arr[t];
}

Monster Monster::GetRandomMonster()
{
    int random {rand() % (static_cast<int>(Monster::Type::Max_types))};

    return Monster(static_cast<Monster::Type>(random));
    
}

Creature Monster::arr[Type::Max_types] 
    {
        {"Leviaphan", 'l', 20, 4, 100},
        {"Skeleon", 's', 4, 2, 25},
        {"Zombie", 'Z', 1, 1, 10}};

