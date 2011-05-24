
#include "DestinationIpFilter.hpp"
#include "SymbolNotFoundException.hpp"

#include <iostream>

using namespace std;

DestinationIp DestinationIpFilter::apply(const string line) const
{
    string tmp, tmp1;
    try
    {
        tmp1 = destinationFilter.getDestinationPartOfTheLine(line);
        tmp = getDestinationIp(tmp1);
    }
    catch(SymbolNotFoundException& e)
    {
        cout<<e.what()<<endl;
    }
    return DestinationIp(tmp);
}

string DestinationIpFilter::getDestinationIp(const string line) const
{
    return line.substr(0, line.rfind("."));
}


