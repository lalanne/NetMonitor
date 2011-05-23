#ifndef DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845
#define DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845

#include "DestinationPort.hpp"
#include "DestinationFilter.hpp"

#include <string>

class DestinationPortFilter
{
    public:
        DestinationPort apply(const std::string line);

    private:
        virtual std::string getDestinationPort(const std::string line) const;

    private:
        DestinationFilter destinationFilter;
};

#endif // DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845
