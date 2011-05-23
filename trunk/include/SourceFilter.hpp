#ifndef SOURCEFILTER_HPP_W0E89RH9ERG9HERG
#define SOURCEFILTER_HPP_W0E89RH9ERG9HERG

#include <string>

class SourceFilter
{
    public:
        std::string extractLine(const std::string line) const;
        std::string getTheStablePartOfTheLine(const std::string line) const;
};

#endif // SOURCEFILTER_HPP_W0E89RH9ERG9HERG
