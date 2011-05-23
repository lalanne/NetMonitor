
#include "SourceFilter.hpp"

using namespace std;

string SourceFilter::extractLine(const string line) const
{
    return line.substr(79);
}

string SourceFilter::getTheStablePartOfTheLine(const string line) const
{
    const unsigned int found = line.find(":");
    return line.substr(found);
}

string SourceFilter::getRawSourceAndDestinationPartOfTheLine(const string line) const
{
    const unsigned int found = line.find(" ");
    return line.substr(found);
}

string SourceFilter::eraseTheFrontOfTheSourceAndDestinationPartOfTheLine(string line) const
{
    string::iterator it = line.begin();
    line.erase(it);
    return line;
}

string SourceFilter::getSourceIpAndPort(const string line) const
{
    const unsigned int found = line.find_first_of(" ");
    return line.substr(0, (found));
}

string SourceFilter::getSourcePartOfTheLine(const string line) const
{
    string tmp = extractLine(line);
    string tmp1 = getTheStablePartOfTheLine(tmp);
    string tmp2 = getRawSourceAndDestinationPartOfTheLine(tmp1);
    string tmp3 = eraseTheFrontOfTheSourceAndDestinationPartOfTheLine(tmp2);
    return getSourceIpAndPort(tmp3);
}
