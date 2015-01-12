#include "Logger.hpp"
#include <iostream>
#include <string>
#include <ctime>

void Logger::destroy()
{
    delete instance;
}

Logger* Logger::getInstance()
{
    return Logger::instance;
}

void Logger::log(std::string s)
{
    time_t t = time(0);
    struct tm * now = localtime(&t);
    std::cout <<
         (now->tm_year + 1900) <<
         '-' <<
         (now->tm_mon + 1) <<
         '-' <<
         now->tm_mday <<
         ' ' <<
         now->tm_hour <<
         ':' <<
         now->tm_min <<
         ':' <<
         now->tm_sec <<
         " - " <<
         s <<
         std::endl;
}

Logger* Logger::instance = new Logger();

