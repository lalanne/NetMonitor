#ifndef FILTERFACTORY_HPP_W9ER8HJIEJRGERG
#define FILTERFACTORY_HPP_W9ER8HJIEJRGERG

#include "DateFilter.hpp"
#include "TimeFilter.hpp"
#include "IPVersionFilter.hpp"
#include "PacketLenghtFilter.hpp"
#include "DestinationIpFilter.hpp"
#include "DestinationPortFilter.hpp"
#include "SourceIpFilter.hpp"
#include "SourcePortFilter.hpp"

#include <memory>

class FilterFactory
{
    public:
        std::auto_ptr<DateFilter> getDateFilter() const;
        std::auto_ptr<TimeFilter> getTimeFilter() const;
        std::auto_ptr<IPVersionFilter> getIpVersionFilter() const;
        std::auto_ptr<PacketLenghtFilter> getPacketLenghtFilter() const;
        std::auto_ptr<DestinationIpFilter> getDestinationIpFilter(const std::string line) const;
        std::auto_ptr<DestinationPortFilter> getDestinationPortFilter(const std::string line) const;
        std::auto_ptr<SourceIpFilter> getSourceIpFilter(const std::string line) const;
        std::auto_ptr<SourcePortFilter> getSourcePortFilter(const std::string line) const;
};

#endif // FILTERFACTORY_HPP_W9ER8HJIEJRGERG
