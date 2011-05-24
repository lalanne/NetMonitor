#ifndef SOURCEIP802_3FILTER_HPP_IAUHERGHWEIUGHWEJGN93
#define SOURCEIP802_3FILTER_HPP_IAUHERGHWEIUGHWEJGN93

#include "SourceIpFilter.hpp"

#include <string>

class SourceIp802_3Filter : public SourceIpFilter
{
    public:
        std::string getSourceIp(const std::string line) const;
};

#endif // SOURCEIP802_3FILTER_HPP_IAUHERGHWEIUGHWEJGN93
