
#include "SourcePortFilter.hpp"

using namespace std;

SourcePort SourcePortFilter::apply(const string line)
{
    string tmp = sourceFilter.getSourcePartOfTheLine(line);
    return SourcePort(getSourcePort(tmp));
}

string SourcePortFilter::getSourcePort(const string line) const
{
    const unsigned int found = line.rfind(".");
    return line.substr(found+1);
}
