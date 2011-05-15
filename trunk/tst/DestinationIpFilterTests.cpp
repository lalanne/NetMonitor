
#include "LineExamples.hpp"

#include "DestinationIpFilter.hpp"
#include "DestinationIp.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    DestinationIp destinationIpExpected("192.168.1.3");
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    DestinationIp destinationIpExpected("192.168.1.3");
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    DestinationIp destinationIpExpected("192.168.1.3");
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4IcmpUnreachableLine)
{
    DestinationIp destinationIpExpected("192.168.1.3");
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}


