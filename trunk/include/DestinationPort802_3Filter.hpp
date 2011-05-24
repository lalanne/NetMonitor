#ifndef DESTINATIONPORT802_3FILTER_HPP_IWEJRG9W8JRG98JERG
#define DESTINATIONPORT802_3FILTER_HPP_IWEJRG9W8JRG98JERG

#include "DestinationPortFilter.hpp"

#include <string>

class DestinationPort802_3Filter : public DestinationPortFilter
{
    public:
        std::string getDestinationPort(const std::string line) const;
};

#endif // DESTINATIONPORT802_3FILTER_HPP_IWEJRG9W8JRG98JERG
