#ifndef SOURCEIPICMPUNREACHEABLEFILTER_HPP_IRUIWEURHGINEWVRINVIEWURN
#define SOURCEIPICMPUNREACHEABLEFILTER_HPP_IRUIWEURHGINEWVRINVIEWURN

#include "SourceIpFilter.hpp"

#include <string>

class SourceIpIcmpUnreacheableFilter : public SourceIpFilter
{
    public:
        std::string getSourceIp(const std::string line) const;
};

#endif // SOURCEIPICMPUNREACHEABLEFILTER_HPP_IRUIWEURHGINEWVRINVIEWURN
