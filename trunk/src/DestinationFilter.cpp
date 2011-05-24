
#include "DestinationFilter.hpp"

using namespace std;

string DestinationFilter::getRawDestinationPartOfTheLine(const string line) const
{
    return line.substr(line.find(">"));
}

string DestinationFilter::eraseTheFrontOfTheDestinationLine(string line) const
{
    line.erase(line.begin());
    line.erase(line.begin());
    return line;
}

string DestinationFilter::getDestinationIpAndPort(const string line) const
{
    return line.substr(0, line.rfind(":"));
}

string DestinationFilter::getDestinationPartOfTheLine(const string line) const
{
    string tmp = lineFilter.extractLine(line);
    string tmp1 = lineFilter.getTheStablePartOfTheLine(tmp);
    string tmp2 = getRawDestinationPartOfTheLine(tmp1);
    string tmp3 = eraseTheFrontOfTheDestinationLine(tmp2);
    return tmp3;
}
