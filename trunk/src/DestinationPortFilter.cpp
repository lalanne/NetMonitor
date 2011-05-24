
#include "DestinationPortFilter.hpp"
#include "SymbolNotFoundException.hpp"

#include <iostream>

using namespace std;

DestinationPort DestinationPortFilter::apply(const string line)
{
    string tmp, tmp1;
    try
    {
        tmp = destinationFilter.getDestinationPartOfTheLine(line);
        tmp1 = destinationFilter.getDestinationIpAndPort(tmp);
    }
    catch(SymbolNotFoundException& e)
    {
        cout<<e.what()<<endl;
    }
    return DestinationPort(getDestinationPort(tmp1));
}

string DestinationPortFilter::getDestinationPort(const string line) const
{
    return line.substr(line.rfind(".")+1);
}
