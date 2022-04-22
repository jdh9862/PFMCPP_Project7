#include "Paladin.h"
#include "Utility.h"

//Paladin::Paladin
Paladin::Paladin(std::string name_, int hp_, int armor_) :
        Character(hp_, armor_, 10), name(std::move(name_))
{
    helpfulItems = makeHelpfulItems(int(random() % 3 + 1));
    defensiveItems = makeDefensiveItems(int(random() % 3 + 1));
}

Paladin::~Paladin() = default;

//Paladin::getName
const std::string &Paladin::getName()
{
    return name;
}

//Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
