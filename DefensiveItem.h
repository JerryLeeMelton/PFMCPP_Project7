#pragma once

#include "Item.h"
#include "Character.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"

struct DefensiveItem : Item
{
    DefensiveItem() : Item("defensive item", 3) { }
    void use(Character* character) override;
};
