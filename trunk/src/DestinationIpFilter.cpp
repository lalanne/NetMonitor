#include "DestinationIpFilter.hpp"

#include <cstdio>

using namespace std;

DestinationIp DestinationIpFilter::apply(const string line) const
{
    string tmp = destinationFilter.getDestinationPartOfTheLine(line);
    return DestinationIp(getDestinationIp(tmp));
}

string DestinationIpFilter::getDestinationIp(const string line) const
{
    const unsigned int found = line.rfind(".");
    return line.substr(0, found);
}


