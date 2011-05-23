
#include "DestinationPortFilter.hpp"

using namespace std;

DestinationPort DestinationPortFilter::apply(const string line)
{
    string tmp = destinationFilter.getDestinationPartOfTheLine(line);
    string tmp2 = destinationFilter.getDestinationIpAndPort(tmp);
    const unsigned int found4 = tmp2.rfind(".");
    return DestinationPort(getDestinationPort(tmp2));
}

string DestinationPortFilter::getDestinationPort(const string line) const
{
    const unsigned int found = line.rfind(".");
    return line.substr(found+1);
}
