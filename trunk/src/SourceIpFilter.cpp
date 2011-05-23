
#include "SourceIpFilter.hpp"

#include <cstdio>

using namespace std;

SourceIp SourceIpFilter::apply(const string line)
{
    string tmp = sourceFilter.getSourcePartOfTheLine(line);
    return SourceIp(getSourceIp(tmp));
}

string SourceIpFilter::getSourceIp(const string line) const
{
    const unsigned int found = line.rfind(".");
    return line.substr(0, found);
}
