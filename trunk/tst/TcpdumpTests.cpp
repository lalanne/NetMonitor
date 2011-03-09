
#include "Tcpdump.hpp"

#include <gtest/gtest.h>

using namespace std;


TEST(TcpdumpTests, tcpdumpWithArguments)
{
    Tcpdump tcpdump("-v -ttt");

    EXPECT_EQ("tcpdump -v -ttt", tcpdump.getString());
}
