#include "Warrior.hpp"
#include "AttributeStrength.hpp"
#include "AttributeSpeed.hpp"
#include <vector>

void Warrior::createAttributes()
{
    attributes.push_back(new AttributeStrength());
    attributes.push_back(new AttributeSpeed());
}

