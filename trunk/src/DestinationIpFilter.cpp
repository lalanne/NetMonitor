
#include "DestinationIpFilter.hpp"

using namespace std;

DestinationIp DestinationIpFilter::apply(const string line) const
{
    string tmp1 = destinationFilter.getDestinationPartOfTheLine(line);
    string tmp = getDestinationIp(tmp1);
    return DestinationIp(tmp);
}

string DestinationIpFilter::getDestinationIp(const string line) const
{
    return line.substr(0, line.rfind("."));
}


