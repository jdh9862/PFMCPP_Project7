#pragma once

#include <memory>
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name, int hp, int armor);

    const std::string & getName() override;

    std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;

    std::unique_ptr<AttackItem> attackItem = std::make_unique<AttackItem>();
};