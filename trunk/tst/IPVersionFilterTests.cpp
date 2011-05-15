
#include "LineExamples.hpp"

#include "IPVersionFilter.hpp"
#include "IPVersion.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(IPVersionFilterTests, appliedFilterToIPv4Line)
{
    IPVersion ipVersionExpected("IPv4");
    IPVersionFilter filter;
    IPVersion ipVersionActual = filter(LineExamples::line);

    EXPECT_TRUE(ipVersionExpected==ipVersionActual);
}
