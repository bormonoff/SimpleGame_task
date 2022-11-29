#include "include/Creature.h"

Creature::Creature(const string& name, char symbol, int health, int damage, int gold)
    : m_name {name}, m_symbol {symbol}, m_health{health}, m_damage {damage}, m_gold {gold}
{

}

void Creature::ReduceHealth(int ammount)
{
    m_health -= ammount;
}
void Creature::AddGold(int ammount)
{
    m_gold += ammount;
}
bool Creature::IsDead()
{
    if (m_health <= 0)
    {
        return 1;
    }
    return 0;
}

ostream& operator << (ostream & out, const Creature& creature)
{
    out<<"You found a " <<creature.GetName()<<" ("<< creature.GetChar()<<")"<<" his damage is: "
    <<creature.GetDamage()<<" and Health is: "<<creature.GetHealth();
    return out;
}