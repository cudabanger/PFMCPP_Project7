#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hp_, int armor_) :
    Character{ hp_, armor_, 10 }, name { name_ }
{
    helpfulItems = makeHelpfulItems(GetRandomNumber());
    defensiveItems = makeDefensiveItems(GetRandomNumber());   
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
