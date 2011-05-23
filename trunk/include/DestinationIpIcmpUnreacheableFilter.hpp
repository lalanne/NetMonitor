#ifndef DESTINATIONIPICMPUNREACHEABLEFILTER_HPP_W9ER8HJIWEJFOJIWE
#define DESTINATIONIPICMPUNREACHEABLEFILTER_HPP_W9ER8HJIWEJFOJIWE

#include "DestinationIpFilter.hpp"

class DestinationIpIcmpUnreacheableFilter : public DestinationIpFilter
{
    public:
        std::string getDestinationIp(const std::string line) const;
};

#endif // DESTINATIONIPICMPUNREACHEABLEFILTER_HPP_W9ER8HJIWEJFOJIWE
