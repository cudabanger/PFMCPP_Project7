#include "AttackItem.h"
#include "Utility.h"

void AttackItem::use(Character* character)
{
    if (character != nullptr)
    {
        useAttackItem(character, this);       
    }
}
