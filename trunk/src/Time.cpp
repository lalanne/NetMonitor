#include "Time.hpp"

Time::Time(const std::string time) : time(time)
{
}

const char* const Time::getPrintFormat() const
{
    return time.c_str();
}

bool Time::operator==(const Time& ti) const
{
    return ti.time == time;
}
