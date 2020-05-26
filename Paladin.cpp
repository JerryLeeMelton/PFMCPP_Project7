#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string name_, int hp, int armor) :
Character(hp, armor, 10),
name(name_)
{
    helpfulItems = makeHelpfulItems( rand() % 10 + 1 );
    defensiveItems = makeDefensiveItems( rand() % 10 + 1 );
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    getCharacterStats(this);
}
