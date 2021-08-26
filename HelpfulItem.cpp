#include "HelpfulItem.h"
#include "Utility.h"

void HelpfulItem::use(Character *character)
{
    if (character != nullptr)
    {
        useHelpfulItem(character, this);
    }    
}
