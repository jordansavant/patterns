#ifndef LEGACYRECTANGLE_HPP
#define LEGACYRECTANGLE_HPP

class LegacyRectangle
{
public:
    LegacyRectangle()
    {
    }

    int x1, y1, x2, y2;

    virtual void set(int x1, int y1, int x2, int y2);

    virtual void display();

};

#endif
