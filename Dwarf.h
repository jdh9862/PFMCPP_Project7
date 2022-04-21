#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name, int hp, int armor);

    ~Dwarf() override;

    const std::string & getName() override;

    std::string getStats() override;

private:
    const std::string name;
};