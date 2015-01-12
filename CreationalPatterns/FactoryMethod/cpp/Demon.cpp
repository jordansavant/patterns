#include "Demon.hpp"
#include "AttributeSpeed.hpp"
#include "AttributeFlight.hpp"
#include <vector>

void Demon::createAttributes()
{
    attributes.push_back(new AttributeSpeed());
    attributes.push_back(new AttributeFlight());
}

