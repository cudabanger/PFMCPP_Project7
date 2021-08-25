#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_, int attackDamage_ ) :
    Character{ hp_, armor_, attackDamage_ }, name { name_ }
{
    helpfulItems = makeHelpfulItems(GetRandomNumber());
    defensiveItems = makeDefensiveItems(GetRandomNumber());
    attackItems = makeAttackItems(1);
}
//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        while( dragon->getHP() > 0 )
        {
            for( auto& item : attackItems )
            {   
                if( auto* attackItem = dynamic_cast<AttackItem*>(item.get()) )
                {
                    attackItem->use(this);
                    item.reset(); //can only be used once!
                    break;
                }
            }

            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);      
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
