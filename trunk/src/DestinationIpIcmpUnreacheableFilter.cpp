
#include "DestinationIpIcmpUnreacheableFilter.hpp"

using namespace std;

string DestinationIpIcmpUnreacheableFilter::getDestinationIp(const string line) const
{
    const unsigned int found = line.rfind(":");
    return line.substr(0, found);
}
