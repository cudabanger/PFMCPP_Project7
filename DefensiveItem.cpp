#include "DefensiveItem.h"
#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    if (character != nullptr)
    {
        useDefensiveItem(character, *this);
    }
}
