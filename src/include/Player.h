#pragma once

#include "Creature.h"

class Player : public Creature
{
    int m_level;

    public:

    Player(const string& name = " ");

    int GetLevel() {return m_level;}

    bool HasWon() {return GetLevel() > 20;}

    void LelelUp () {m_level += 1; AddDamage(1);}
};