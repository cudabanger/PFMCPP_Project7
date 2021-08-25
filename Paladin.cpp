#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hp_, int armor_, int attackDamage_) :
    Character{ hp_, armor_, attackDamage_ }, name { name_ }
{
    helpfulItems = makeHelpfulItems(RANDOM_NUMBER);
    defensiveItems = makeDefensiveItems(RANDOM_NUMBER);   
}

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}
// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
