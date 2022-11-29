#pragma once

#include "Creature.h"

class Player : public Creature
{
    int m_level;

    public:

    Player(const string& name = " ");

    void LelelUp ();

    int GetLevel() {return m_level;}

    bool HasWon() {return GetLevel() > 20;} 
};