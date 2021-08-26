#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hp_, int armor_) :
        Character{ hp_, armor_, 4 }, name { name_ }
    {
        helpfulItems = makeHelpfulItems(GetRandomNumber());
        defensiveItems = makeDefensiveItems(GetRandomNumber());
    } 

    ~Dwarf() override ;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
