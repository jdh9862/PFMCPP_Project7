#include "Paladin.h"
#include "Utility.h"

//Paladin::Paladin
Paladin::Paladin(std::string name, int hp, int armor) :
        Character(hp, armor, 10), name(std::move(name))
{
    helpfulItems = makeHelpfulItems(int(random() % 3 + 1));
    defensiveItems = makeDefensiveItems(int(random() % 3 + 1));
}

Paladin::~Paladin() { }

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
