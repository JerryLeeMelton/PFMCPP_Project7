#pragma once

#include "Item.h"
#include "Dwarf.h"
#include "Character.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"

struct AttackItem : Item
{
    AttackItem() : Item("Attack Item", 5) {}
    
    void use(Character* character) override;
};
