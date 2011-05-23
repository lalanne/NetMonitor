
#include "FilterFactory.hpp"
#include "DestinationIpIcmpUnreacheableFilter.hpp"
#include "DestinationPortIcmpUnreacheableFilter.hpp"

using namespace std;

auto_ptr<DateFilter> FilterFactory::getDateFilter() const
{
    return auto_ptr<DateFilter>(new DateFilter);
}

auto_ptr<TimeFilter> FilterFactory::getTimeFilter() const
{
    return auto_ptr<TimeFilter>(new TimeFilter);
}

auto_ptr<IPVersionFilter> FilterFactory::getIpVersionFilter() const
{
    return auto_ptr<IPVersionFilter>(new IPVersionFilter);
}

auto_ptr<PacketLenghtFilter> FilterFactory::getPacketLenghtFilter() const
{
    return auto_ptr<PacketLenghtFilter>(new PacketLenghtFilter);
}

auto_ptr<DestinationIpFilter> FilterFactory::getDestinationIpFilter(const string line) const
{
    size_t foundUnreachable = line.find("unreachable");
    if(foundUnreachable != string::npos)
    {
        return auto_ptr<DestinationIpFilter>(new DestinationIpIcmpUnreacheableFilter);
    }
    else
    {
        return auto_ptr<DestinationIpFilter>(new DestinationIpFilter);
    }
}

auto_ptr<DestinationPortFilter> FilterFactory::getDestinationPortFilter(const string line) const
{
    size_t foundUnreachable = line.find("unreachable");
    if(foundUnreachable != string::npos)
    {
        return auto_ptr<DestinationPortFilter>(new DestinationPortIcmpUnreacheableFilter);
    }
    else
    {
        return auto_ptr<DestinationPortFilter>(new DestinationPortFilter);
    }
}

auto_ptr<SourceIpFilter> FilterFactory::getSourceIpFilter() const
{
    return auto_ptr<SourceIpFilter>(new SourceIpFilter);
}

auto_ptr<SourcePortFilter> FilterFactory::getSourcePortFilter() const
{
    return auto_ptr<SourcePortFilter>(new SourcePortFilter);
}

