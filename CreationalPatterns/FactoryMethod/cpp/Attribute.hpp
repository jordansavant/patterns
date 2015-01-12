#ifndef ATTRIBUTE_HPP
#define ATTRIBUTE_HPP

#include <string>

class Attribute
{
public:
    Attribute(std::string name)
        : name(name)
    {
    }

    virtual ~Attribute()
    {
    }

    std::string name;

};

#endif
