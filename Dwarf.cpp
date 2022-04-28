#include "Dwarf.h"

#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(std::move(name_))
{
    helpfulItems = makeHelpfulItems(int(random() % 3 + 1));
    defensiveItems = makeDefensiveItems(int(random() % 3 + 1));
}

Dwarf::~Dwarf() = default;

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

