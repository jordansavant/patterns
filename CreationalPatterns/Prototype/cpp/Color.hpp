#ifndef COLOR_HPP
#define COLOR_HPP

#include "ColorPrototype.hpp"

class Color : public ColorPrototype
{
public:
    Color(char red, char green, char blue)
        : r(red), g(green), b(blue)
    {
    }

    char r, g, b;

    virtual ColorPrototype* clone();

};

#endif
