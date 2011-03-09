
#include "DateFilter.hpp"
#include "Date.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

const string LINE = "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";

TEST(DatesFilterTests, appliedFilterToIPv4Line)
{
    Date dateExpected("2011-03-07");
    DateFilter filter;
    Date dateActual = filter(LINE);

    EXPECT_TRUE(dateExpected==dateActual);
}
