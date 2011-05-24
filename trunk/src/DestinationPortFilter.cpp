
#include "DestinationPortFilter.hpp"

using namespace std;

DestinationPort DestinationPortFilter::apply(const string line)
{
    string tmp = destinationFilter.getDestinationPartOfTheLine(line);
    string tmp2 = destinationFilter.getDestinationIpAndPort(tmp);
    return DestinationPort(getDestinationPort(tmp2));
}

string DestinationPortFilter::getDestinationPort(const string line) const
{
    return line.substr(line.rfind(".")+1);
}
