#ifndef DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER
#define DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER

#include "DestinationIp.hpp"

#include <string>

class DestinationIpFilter
{
    public:
        DestinationIp operator()(const std::string line);
};

#endif // DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER
