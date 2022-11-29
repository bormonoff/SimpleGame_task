#pragma once

#include "psh.h"

class Creature
{
    protected:
    string m_name;
    char m_symbol;
    int m_health;
    int m_damage;
    int m_gold;

    public:

    Creature(const std::string& name = " ", char symbol = ' ', int health = 0, int damage = 0, int gold = 0);

    void ReduceHealth(int ammount);
    void AddGold(int ammount);
    bool IsDead();
    
//Simple Getters
    string GetName() const {return m_name;}
    char GetChar() const {return m_symbol;}
    int GetHealth() const {return m_health;}
    int GetDamage() const {return m_damage;}
    int GetGold() const {return m_gold;}
//Simple Setters
    void SetHealth(int value){m_health-=value;}
   
    void AddDamage(int ammount) {m_gold += ammount;}
};