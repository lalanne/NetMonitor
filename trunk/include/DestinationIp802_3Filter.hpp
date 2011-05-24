#ifndef DESTINATIONIP802_3FILTER_HPP_9WERH9HURGIUWERG
#define DESTINATIONIP802_3FILTER_HPP_9WERH9HURGIUWERG

#include "DestinationIpFilter.hpp"

#include <string>

class DestinationIp802_3Filter : public DestinationIpFilter
{
    public:
        std::string getDestinationIp(const std::string line) const;
};

#endif // DESTINATIONIP802_3FILTER_HPP_9WERH9HURGIUWERG
