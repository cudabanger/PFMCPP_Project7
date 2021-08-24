#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp_, int armor_, int attackDamage_);
    ~DragonSlayer() override {} 

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
    std::vector<std::unique_ptr<Item>> attackItems;
private:
    const std::string name;
};
