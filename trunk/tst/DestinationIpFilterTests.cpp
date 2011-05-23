
#include "LineExamples.hpp"

#include "DestinationIpFilter.hpp"
#include "DestinationIpIcmpUnreacheableFilter.hpp"
#include "DestinationIp.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith2CharactersLenght);
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter.apply(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith3CharactersLenght);
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter.apply(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineWith4CharactersLenght);
    DestinationIpFilter filter;
    DestinationIp destinationIpActual = filter.apply(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}

TEST(DestinationIpFilterTests, appliedFilterToIPv4IcmpUnreachableLine)
{
    DestinationIp destinationIpExpected(LineExamples::destinationIpLineIcmpUnreacheable);
    DestinationIpIcmpUnreacheableFilter filter;
    DestinationIp destinationIpActual = filter.apply(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(destinationIpExpected==destinationIpActual);
}


