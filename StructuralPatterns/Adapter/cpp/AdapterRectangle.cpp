#include "AdapterRectangle.hpp"
#include <iostream>

void AdapterRectangle::set(int x, int y, int width, int height)
{
    int x1 = x;
    int y1 = y;
    int x2 = x + width;
    int y2 = y + height;
    LegacyRectangle::set(x1, y1, x2, y2);
}

void AdapterRectangle::display()
{
    LegacyRectangle::display();
}
