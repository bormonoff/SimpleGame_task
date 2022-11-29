#pragma once
#include "Player.h"
#include "Monster.h"

void FightMonster(Player& player,Monster& monster);

int GetRandomNumber(int begin, int end);

ostream& operator << (ostream & out, const Creature& creature);