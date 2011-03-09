#include "IPVersionFilter.hpp"

using namespace std;

IPVersion IPVersionFilter::operator()(const string line)
{
    return IPVersion(line.substr(66, 4));
}
