#pragma once

#include <iostream>
#include <string>

using namespace std;

class Creature
{
    string m_name;
    char m_symbol;
    int m_health;
    int m_damage;
    int m_gold;

    public:

    Creature(const string& name = " ", char symbol = ' ', int health = 0, int damage = 0, int gold = 0);

    void ReduceHealth(int ammount);
    void AddGold(int ammount);
    bool IsDead();
    
//simple getters
    string GetName(){return m_name;}
    char GetChar(){return m_symbol;}
    int GetHealth(){return m_health;}
    int GetDamage(){return m_damage;}
    int GetGold(){return m_gold;}

};