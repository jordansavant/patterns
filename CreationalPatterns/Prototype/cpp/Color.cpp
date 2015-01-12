#include "Color.hpp"
#include "ColorPrototype.hpp"

ColorPrototype* Color::clone()
{
    return new Color(r, g, b);
}
