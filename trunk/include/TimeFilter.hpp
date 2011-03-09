#ifndef TIMEFILTER_HPP_PWERPGHWEROIGHERIHG
#define TIMEFILTER_HPP_PWERPGHWEROIGHERIHG

#include "Time.hpp"

#include <string>

class TimeFilter
{
    public:
        Time operator()(const std::string line);
};

#endif // TIMEFILTER_HPP_PWERPGHWEROIGHERIHG
