#include "include/functions.h"

void FightMonster(Player& player,Monster& monster)
{

    while(!player.IsDead() && !monster.IsDead())
    {

        int Fight;
        cout<<endl<<"Your current health and damage are: "<< player.GetHealth()<<"  "<<player.GetDamage()<<endl
            <<"Current "<<monster.GetName()<< " health and damage are: "<< monster.GetHealth()<<"  "<<monster.GetDamage()<<endl<<endl;
        cout<<"What to do? Fight(1) or Run(2)"<<endl;
        cin>>Fight;
        cin.clear();

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
                player.LelelUp(); 
                cout<<endl<<"You sucessfully killed "<<monster.GetName()<<endl
                <<"Your current gold: "<<player.GetGold()<<endl<<endl;}
                
        }else
        {
            if(GetRandomNumber(0,1))
            {
            cout<<endl<<"You didn't escape"<<endl;
            player.SetHealth(monster.GetDamage());
            }else{cout<<endl<<"You ran sucessfelly"<<endl;
            break;}
        }

    
    }
    return;
}

int GetRandomNumber(int begin, int end)
{
    return begin + rand() % (end + 1);
}

ostream& operator << (ostream & out, const Creature& creature)
{
    out<<"You found a " <<creature.GetName()<<" ("<< creature.GetChar()<<")"<<" his damage is: "
    <<creature.GetDamage()<<" and health is: "<<creature.GetHealth();
    return out;
}