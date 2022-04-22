#include "Dragon.h"
#include "DragonSlayer.h"
#include "Utility.h"

//Dragon::Dragon
Dragon::Dragon(std::string name_, int hp_, int armor_) :
        Character(hp_, armor_, 80), name(std::move(name_)) {}

Dragon::~Dragon() = default;

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if (auto *slayer = dynamic_cast<DragonSlayer *>(&other))
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    } else
    {
        Character::attack(other);
    }
}

//Dragon::getName
const std::string &Dragon::getName()
{
    return name;
}

//Dragon::getStats
std::string Dragon::getStats()
{
    return getCharacterStats(this);
}
