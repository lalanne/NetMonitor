#ifndef DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845
#define DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845

#include "DestinationPort.hpp"

#include <string>

class DestinationPortFilter
{
    public:
        DestinationPort operator()(const std::string line);
};

#endif // DESTINATIONPORTFILTER_HPP_WIEURHEHRG8R9G834593845
