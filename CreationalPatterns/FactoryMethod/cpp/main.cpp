#include <iostream>
#include <vector>
#include "Character.hpp"
#include "Attribute.hpp"
#include "Warrior.hpp"
#include "Demon.hpp"

int main()
{
    // Note that our property is the abstract type
    std::vector<Character*> characters;

    // Create a Warrior and let it define its own attributes
    characters.push_back(new Warrior());
    characters.back()->createAttributes();

    // Create a demon and let it define its own attributes
    characters.push_back(new Demon());
    characters.back()->createAttributes();

    for(unsigned int i=0; i < characters.size(); i++)
    {
        std::cout << "Character: " << characters[i]->name << std::endl;

        for(unsigned int j=0; j < characters[i]->attributes.size(); j++)
        {
            std::cout << "  Attribute: " << characters[i]->attributes[j]->name << std::endl;
        }

        std::cout << std::endl;
    }

    for(unsigned int i=0; i < characters.size(); i++)
    {
        delete characters[i];
    }

    return 0;
}
