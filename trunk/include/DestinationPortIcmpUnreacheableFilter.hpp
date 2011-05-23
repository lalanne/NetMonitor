#ifndef DESTINATIONPORTICMPUNREACHEABLEFILTER_HPP_9R8JF9EW8JFWJEF9J
#define DESTINATIONPORTICMPUNREACHEABLEFILTER_HPP_9R8JF9EW8JFWJEF9J

#include "DestinationPortFilter.hpp"

#include <string>

class DestinationPortIcmpUnreacheableFilter : public DestinationPortFilter
{
    public:
        std::string getDestinationPort(const std::string line) const;
};

#endif // DESTINATIONPORTICMPUNREACHEABLEFILTER_HPP_9R8JF9EW8JFWJEF9J
