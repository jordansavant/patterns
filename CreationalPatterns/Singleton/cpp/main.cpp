#include "Logger.hpp"

void sub()
{
    Logger::getInstance()->log("sub");
}

int main()
{
    Logger::getInstance()->log("main");

    sub();

    return 0;
}
