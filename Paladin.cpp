#include "Paladin.h"
#include "Utility.h"

//Paladin::Paladin
Paladin::Paladin(std::string name, int hp, int armor) :
        Character(hp, armor, 0), name(std::move(name)) {}

//Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

//Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
