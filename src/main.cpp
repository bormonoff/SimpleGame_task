#include "include/Player.h"
#include "include/Monster.h"

ostream& operator << (ostream & out, const Creature& creature);

int GetRandomNumber(int begin, int end)
{
    return begin + rand() % (end + 1);
}

void FightMonster(Player& player,Monster& monster)
{

    while(!player.IsDead() && !monster.IsDead())
    {

        bool Fight;
        cout<<"What to do? Fight(1) or Run(2)"<<endl;
        cin>>Fight;

        if(Fight == 1)
        {
        
            monster.SetHealth(player.GetDamage());
            
            if (monster.GetHealth() <= 0)
            {
                monster.IsDead();
            }          

            if(!monster.IsDead())
            {
            player.SetHealth(monster.GetDamage());
            }else {  
                player.AddGold(monster.GetGold()); 
                player.LelelUp(); }
                
        }else
        {
            if(GetRandomNumber(0,1))
            {
            player.SetHealth(monster.GetDamage());
            }else{continue;}
        }

    
    }
    return;
}


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
    cout<<"Congrads! You killed them all"<<endl;
}

if (player.IsDead())
{
    cout<<"Next time bro"<<endl;
}

return 0;
}

