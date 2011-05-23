#include "LineFilter.hpp"

using namespace std;

string LineFilter::extractLine(const string line) const
{
    return line.substr(79);
}

string LineFilter::getTheStablePartOfTheLine(const string line) const
{
    const unsigned int found = line.find(":");
    return line.substr(found);
}
