#include "DestinationIpFilter.hpp"

using namespace std;

DestinationIp DestinationIpFilter::operator()(const string line)
{
    string tmp = line.substr(79);
    const unsigned int found = tmp.find(":");
    string tmp1 = tmp.substr(found);
    const unsigned int found1 = tmp1.find(">");
    string tmp2 = tmp1.substr(found1);
    string::iterator it = tmp2.begin();
    tmp2.erase(it);
    string::iterator it1 = tmp2.begin();
    tmp2.erase(it1);

    string unreachable = "unreachable";
    size_t foundUnreachable = tmp.find(unreachable);
    if(foundUnreachable != string::npos)
    {
        const unsigned int found3 = tmp2.rfind(":");

        return DestinationIp(tmp2.substr(0, found3));
    }
    else
    {
        const unsigned int found3 = tmp2.rfind(".");

        return DestinationIp(tmp2.substr(0, found3));
    }
}

