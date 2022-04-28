#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(std::move(name_))
{
    helpfulItems = makeHelpfulItems(int(random() % 3 + 1));
    defensiveItems = makeDefensiveItems(int(random() % 3 + 1));
}

DragonSlayer::~DragonSlayer() = default;

//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if (auto* dragon = dynamic_cast<Dragon*>(&other))
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        while (dragon->getHP() > 0)
        {
            if (attackItem)
            {
                attackItem->use(this);
                attackItem.reset(); //can only be used once!
            }
            dragon->takeDamage(attackDamage);
        }
    }

    Character::attack(other);

}

//DragonSlayer::getStats
std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}

