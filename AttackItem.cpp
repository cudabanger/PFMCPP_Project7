#include "AttackItem.h"
#include "Character.h"
#include "DragonSlayer.h"
#include "Utility.h"

void AttackItem::use(Character* character)
{
    if (character != nullptr)
    {
        useAttackItem(character, this);       
    }
}
