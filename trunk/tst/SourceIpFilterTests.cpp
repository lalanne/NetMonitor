
#include "SourceIpFilter.hpp"
#include "SourceIp.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

static const string LINE_WITH_2_CHARACTERS_LENGHT =
        "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";
static const string LINE_WITH_3_CHARACTERS_LENGHT =
        "2011-03-09 01:05:00.359547 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 66: 200.27.57.13.80 > 192.168.1.3.35227: tcp 0";
static const string LINE_WITH_4_CHARACTERS_LENGHT =
        "2011-03-09 12:48:48.756365 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 1496: 200.27.57.9.1935 > 192.168.1.3.34430: tcp 1430";
static const string LINE_ICMP_UNREACHABLE =
        "2011-03-12 12:50:38.519637 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 70: 192.168.1.1 > 192.168.1.3: ICMP host 74.125.77.101 unreachable, length 36";

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    SourceIp sourceIpExpected("199.59.148.20");
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter(LINE_WITH_2_CHARACTERS_LENGHT);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    SourceIp sourceIpExpected("200.27.57.13");
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter(LINE_WITH_3_CHARACTERS_LENGHT);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    SourceIp sourceIpExpected("200.27.57.9");
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter(LINE_WITH_4_CHARACTERS_LENGHT);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}

TEST(SourceIpFilterTests, appliedFilterToIcmpUnreachableLine)
{
    SourceIp sourceIpExpected("192.168.1.1");
    SourceIpFilter filter;
    SourceIp sourceIpActual = filter(LINE_ICMP_UNREACHABLE);

    EXPECT_TRUE(sourceIpExpected==sourceIpActual);
}



