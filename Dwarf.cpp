#include "Dwarf.h"
#include "Utility.h"

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}



Dwarf::~Dwarf()
{

}
