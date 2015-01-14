#include "LegacyRectangle.hpp"
#include <iostream>

void LegacyRectangle::set(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

void LegacyRectangle::display()
{
    std::cout << "pos1(" << x1 << ", " << y1 << ") pos2(" << x2 << ", " << y2 << ")" << std::endl;
}
