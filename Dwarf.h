#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hp_, int armor_, int attackDamage_) :
        Character{ hp_, armor_, attackDamage_ }, name { name_ }
    {
        helpfulItems = makeHelpfulItems(RANDOM_NUMBER);
        defensiveItems = makeDefensiveItems(RANDOM_NUMBER);
    } 

    ~Dwarf() override ;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
