#include "DestinationIpFilter.hpp"

#include <cstdio>

using namespace std;

DestinationIp DestinationIpFilter::apply(const string line) const
{
    return DestinationIp(getDestinationIp(destinationFilter.getDestinationPartOfTheLine(line)));
}

string DestinationIpFilter::getDestinationIp(const string line) const
{
    return line.substr(0, line.rfind("."));
}


