#ifndef COLORMANAGER_HPP
#define COLORMANAGER_HPP

#include <map>

class Color;

class ColorManager
{
public:
    std::map<std::string, Color*> colors;

    void addColor(std::string, Color*);
};

#endif
