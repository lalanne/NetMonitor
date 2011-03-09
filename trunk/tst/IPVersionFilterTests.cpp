#include "IPVersionFilter.hpp"
#include "IPVersion.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

const string LINE = "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";

TEST(IPVersionFilterTests, appliedFilterToIPv4Line)
{
    IPVersion ipVersionExpected("IPv4");
    IPVersionFilter filter;
    IPVersion ipVersionActual = filter(LINE);

    EXPECT_TRUE(ipVersionExpected==ipVersionActual);
}
