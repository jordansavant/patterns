#ifndef DEMON_HPP
#define DEMON_HPP

#include "Character.hpp"

class Demon : public Character
{
public:
    Demon()
        : Character("Demon")
    {
    }

    /**
     * FACTORY METHOD
     * Will create the attributes for the Demon
     */
    virtual void createAttributes();

};

#endif
