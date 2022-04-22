#include "Dwarf.h"

#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string name, int hp, int armor) :
        Character(hp, armor, 4), name(std::move(name))
{
    helpfulItems = makeHelpfulItems(int(random() % 3 + 1));
    defensiveItems = makeDefensiveItems(int(random() % 3 + 1));
}

Dwarf::~Dwarf() = default;

//Dwarf::getName
const std::string &Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

