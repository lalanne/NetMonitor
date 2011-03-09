#include "SourcePortFilter.hpp"

using namespace std;

SourcePort SourcePortFilter::operator()(const string line)
{
    string tmp = line.substr(79);
    const unsigned int found = tmp.find(":");
    string tmp1 = tmp.substr(found);
    const unsigned int found1 = tmp1.find(" ");
    string tmp2 = tmp1.substr(found1);
    string::iterator it = tmp2.begin();
    tmp2.erase(it);
    const unsigned int found2 = tmp2.find_first_of(" ");
    string tmp3 = tmp2.substr(0, (found2));
    const unsigned int found3 = tmp3.rfind(".");

    return SourcePort(tmp3.substr(found3+1));
}
