#include "include/Player.h"
#include "include/Monster.h"
#include "include/functions.h"

/*
Game
1. Each round you find a monster
2. When monster is found you have a choise: to fight or run
3. If you decide to run there is 50% chance to run (Or you will be attacked by monster)
4. If you fight you attack first
5. If you win you improve your level (+1 damage and +2 health)
6. The game ends when you get the 20 lvl or die
*/

int main()
{

srand(time(NULL));

Player player{"Bormon"};

while(!player.HasWon() && !player.IsDead())
{
    Monster enemy{Monster::GetRandomMonster()};
    cout<<enemy<<endl;
    FightMonster(player, enemy);
}

if (player.HasWon())
{
    cout<<"Congrads! You level is 20 & you killed them all"<<endl;
}

if (player.IsDead())
{
    cout<<endl<<"You have died. Next time bro"<<endl
        <<"Current lvl is: "<<player.GetLevel()<<" and gold is: "
        <<player.GetGold()<<endl<<endl;   
}

return 0;
}

