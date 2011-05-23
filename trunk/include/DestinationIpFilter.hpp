#ifndef DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER
#define DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER

#include "DestinationIp.hpp"
#include "DestinationFilter.hpp"

#include <string>

class DestinationIpFilter
{
    public:
        DestinationIp apply(const std::string line) const;

    private:
        virtual std::string getDestinationIp(const std::string line) const;

    private:
        DestinationFilter destinationFilter;
};

#endif // DESTINATIONIPFILTER_HPP_WEUR98ERHG98WERG9JER
