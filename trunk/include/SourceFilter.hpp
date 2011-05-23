#ifndef SOURCEFILTER_HPP_W0E89RH9ERG9HERG
#define SOURCEFILTER_HPP_W0E89RH9ERG9HERG

#include "LineFilter.hpp"

#include <string>

class SourceFilter
{
    public:
        std::string getSourcePartOfTheLine(const std::string line) const;
        std::string getRawSourceAndDestinationPartOfTheLine(const std::string line) const;
        std::string eraseTheFrontOfTheSourceAndDestinationPartOfTheLine(std::string line) const;
        std::string getSourceIpAndPort(const std::string line) const;

    private:
        LineFilter lineFilter;
};

#endif // SOURCEFILTER_HPP_W0E89RH9ERG9HERG
