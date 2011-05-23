#include "SourceIpIcmpUnreacheableFilter.hpp"

using namespace std;

string SourceIpIcmpUnreacheableFilter::getSourceIp(const string line) const
{
    const unsigned int found = line.rfind(":");
    return line.substr(0, found);
}
