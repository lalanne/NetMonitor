#include "TimeFilter.hpp"

Time TimeFilter::operator()(const std::string line)
{
    return Time(line.substr(11, 15));
}
