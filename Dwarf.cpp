#include "Dwarf.h"

#include <utility>

//Dwarf::Dwarf
Dwarf::Dwarf(std::string name, int hp, int armor) :
    Character(hp, armor, 0), name(std::move(name)) {}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return std::string();
}

