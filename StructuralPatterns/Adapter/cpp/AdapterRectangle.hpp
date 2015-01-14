#ifndef ADPATERRECTANGLE_HPP
#define ADPATERRECTANGLE_HPP

#include "LegacyRectangle.hpp"

class AdapterRectangle : private LegacyRectangle
{
public:
    AdapterRectangle()
    {
    }

    virtual void set(int x, int y, int width, int height);

    virtual void display();
};

#endif
