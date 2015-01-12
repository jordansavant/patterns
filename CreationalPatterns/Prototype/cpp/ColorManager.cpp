#include "ColorManager.hpp"
#include <map>
#include <string>
#include "Color.hpp"

void ColorManager::addColor(std::string name, Color* color)
{
    colors[name] = color;
}
