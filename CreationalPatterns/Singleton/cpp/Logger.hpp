#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
public:
    static void destroy();

    static Logger* getInstance();

    void log(std::string);

private:
    static Logger* instance;
};

#endif
