#include "DestinationPortFilter.hpp"

using namespace std;

DestinationPort DestinationPortFilter::operator()(const string line)
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
    const unsigned int found3 = tmp2.rfind(".");
    string tmp3 = tmp2.substr(found3);
    string::iterator it2 = tmp3.begin();
    tmp3.erase(it2);
    const unsigned int found4 = tmp3.rfind(":");

    return DestinationPort(tmp3.substr(0, found4));
}
