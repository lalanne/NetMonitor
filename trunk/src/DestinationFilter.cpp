
#include "DestinationFilter.hpp"

using namespace std;

string DestinationFilter::extractLine(const string line) const
{
    return line.substr(79);
}

string DestinationFilter::getTheStablePartOfTheLine(const string line) const
{
    const unsigned int found = line.find(":");
    return line.substr(found);
}

string DestinationFilter::getRawDestinationPartOfTheLine(const string line) const
{
    const unsigned int found = line.find(">");
    return line.substr(found);
}

string DestinationFilter::eraseTheFrontOfTheDestinationLine(string line) const
{
    string::iterator it = line.begin();
    line.erase(it);
    string::iterator it1 = line.begin();
    line.erase(it1);
    return line;
}

string DestinationFilter::getDestinationIpAndPort(const string line) const
{
    const unsigned int found = line.rfind(":");
    return line.substr(0, found);
}

string DestinationFilter::getDestinationPartOfTheLine(const string line) const
{
    string tmp = extractLine(line);
    string tmp1 = getTheStablePartOfTheLine(tmp);
    string tmp2 = getRawDestinationPartOfTheLine(tmp1);
    string tmp3 = eraseTheFrontOfTheDestinationLine(tmp2);

    return tmp3;
}
