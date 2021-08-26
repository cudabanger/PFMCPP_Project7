#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
#include "AttackItem.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_ ) :
    Character{ hp_, armor_, 4 }, name { name_ }, attackItem { new AttackItem }
{
    helpfulItems = makeHelpfulItems(GetRandomNumber());
    defensiveItems = makeDefensiveItems(GetRandomNumber());
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
        if ( dragon->getHP() && attackItem != nullptr ) 
        {
            attackItem->use(this);
            attackItem.reset(nullptr);
        }

        while( dragon->getHP() )
        {      
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
