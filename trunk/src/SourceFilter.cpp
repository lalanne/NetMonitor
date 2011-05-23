
#include "SourceFilter.hpp"

using namespace std;

string DestinationFilter::extractLine(const string line) const
{
    return line.substr(79);
}

string SourceFilter::getTheStablePartOfTheLine(const string line) const
{
    const unsigned int found = line.find(":");
    return line.substr(found);
}
