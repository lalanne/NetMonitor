#include "DateFilter.hpp"

Date DateFilter::operator()(const std::string line)
{
    return Date(line.substr(0, 10));
}
