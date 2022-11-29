#include "include/Player.h"

Player::Player(const std::string& name)
    :Creature(name, '@', 10, 1), m_level {1} {}

 void Player::LelelUp () {
    m_level += 1; 
    m_health += 2;
    AddDamage(1);}