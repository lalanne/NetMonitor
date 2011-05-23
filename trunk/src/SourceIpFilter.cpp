
#include "SourceIpFilter.hpp"

#include <cstdio>

using namespace std;

SourceIp SourceIpFilter::apply(const string line)
{
    string tmp = sourceFilter.extractLine(line);
    string tmp1 = sourceFilter.getTheStablePartOfTheLine(tmp);
    string tmp2 = sourceFilter.getRawSourceAndDestinationPartOfTheLine(tmp1);
    string tmp3 = sourceFilter.eraseTheFrontOfTheSourceAndDestinationPartOfTheLine(tmp2);
    string tmp4 = sourceFilter.getSourceIpAndPort(tmp3);
    return SourceIp(getSourceIp(tmp4));
}

string SourceIpFilter::getSourceIp(const string line) const
{
    const unsigned int found = line.rfind(".");
    return line.substr(0, found);
}
