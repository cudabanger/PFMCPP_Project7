#include "DefensiveItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include <cassert>

void DefensiveItem::use(Character* character)
{
    if (character != nullptr)
    {
        useDefensiveItem(character, *this);
    }
}
