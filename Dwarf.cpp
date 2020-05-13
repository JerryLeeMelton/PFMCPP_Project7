#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp, int armor) :
Character(hp, armor, 4),
name(name_)
{

}

cosnt std::string& Dwarf::getName() 
{
    return name;
}

std::string Dwarf::getStats() 
{

}
