#include "include/Player.h"

Player::Player(const std::string& name)
    :Creature(name, '@', 10, 1), m_level {1}
{

}