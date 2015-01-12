#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character
{
public:
    Warrior()
        : Character("Warrior")
    {
    }

    /**
     * FACTORY METHOD
     * Will create the attribtues for the Warrior
     */
    virtual void createAttributes();

};

#endif
