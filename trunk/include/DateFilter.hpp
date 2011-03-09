#ifndef DATEFILTER_HPP_PW9E8HG9EWHRG9EHG
#define DATEFILTER_HPP_PW9E8HG9EWHRG9EHG

#include "Date.hpp"

#include <string>

class DateFilter
{
    public:
        Date operator()(const std::string line);
};

#endif // DATEFILTER_HPP_PW9E8HG9EWHRG9EHG
