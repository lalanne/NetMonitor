
#include "FilterFactory.hpp"
#include "DestinationIpIcmpUnreacheableFilter.hpp"
#include "DestinationPortIcmpUnreacheableFilter.hpp"
#include "SourceIpIcmpUnreacheableFilter.hpp"
#include "SourcePortIcmpUnreacheableFilter.hpp"
#include "DestinationIp802_3Filter.hpp"
#include "DestinationPort802_3Filter.hpp"
#include "SourceIp802_3Filter.hpp"
#include "SourcePort802_3Filter.hpp"

#include <cstdio>

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
        size_t found802_3 = line.find("802.3");
        if(found802_3 != string::npos)
        {
            return auto_ptr<DestinationIpFilter>(new DestinationIp802_3Filter);
        }
        else
        {
            return auto_ptr<DestinationIpFilter>(new DestinationIpFilter);
        }
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
        size_t found802_3 = line.find("802.3");
        if(found802_3 != string::npos)
        {
            return auto_ptr<DestinationPortFilter>(new DestinationPort802_3Filter);
        }
        else
        {
            return auto_ptr<DestinationPortFilter>(new DestinationPortFilter);
        }
    }
}

auto_ptr<SourceIpFilter> FilterFactory::getSourceIpFilter(const std::string line) const
{
    size_t foundUnreachable = line.find("unreachable");
    if(foundUnreachable != string::npos)
    {
        return auto_ptr<SourceIpFilter>(new SourceIpIcmpUnreacheableFilter);
    }
    else
    {
        size_t found802_3 = line.find("802.3");
        if(found802_3 != string::npos)
        {
            return auto_ptr<SourceIpFilter>(new SourceIp802_3Filter);
        }
        else
        {
            return auto_ptr<SourceIpFilter>(new SourceIpFilter);
        }
    }
}

auto_ptr<SourcePortFilter> FilterFactory::getSourcePortFilter(const std::string line) const
{
    size_t foundUnreachable = line.find("unreachable");
    if(foundUnreachable != string::npos)
    {
        return auto_ptr<SourcePortFilter>(new SourcePortIcmpUnreacheableFilter);
    }
    else
    {
        size_t found802_3 = line.find("802.3");
        if(found802_3 != string::npos)
        {
            return auto_ptr<SourcePortFilter>(new SourcePort802_3Filter);
        }
        else
        {
            return auto_ptr<SourcePortFilter>(new SourcePortFilter);
        }
    }
}

