#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <vector>
#include <string>
#include "Attribute.hpp"

class Character
{
public:
    Character(std::string name)
        : name(name)
    {
    }

    virtual ~Character()
    {
        for(unsigned int i=0; i < attributes.size(); i++)
        {
            delete attributes[i];
        }
    }

    std::string name;
    std::vector<Attribute*> attributes;

    /**
     * ABSTRACT FACTORY METHOD
     * All Characters must implement what attribtues they support
     */
    virtual void createAttributes() = 0;

};

#endif
