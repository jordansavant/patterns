#include <iostream>
#include "ColorManager.hpp"
#include "Color.hpp"

int main()
{
    ColorManager manager;

    // Create our standard colors
    manager.addColor("red", new Color(255, 0, 0));
    manager.addColor("green", new Color(0, 255, 0));
    manager.addColor("blue", new Color(0, 0, 255));

    // User creates custom colors
    manager.addColor("purple", new Color(255, 0, 255));
    manager.addColor("cyan", new Color(0, 255, 255));

    // User clones selected colors
    Color* colorRed = static_cast<Color*>(manager.colors["red"]->clone());
    Color* colorBlue = static_cast<Color*>(manager.colors["blue"]->clone());

    return 0;
}

