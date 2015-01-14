#include "AdapterRectangle.hpp"

int main()
{
    AdapterRectangle rec;

    // Adapter allows us to set dimensions with width and height
    // which adapts the data to the legacy rectangle format and
    // still allows us to utilize the display method of the legacy
    rec.set(10, 20, 4, 5);
    rec.display();

    return 0;
}
