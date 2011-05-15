
#include "LineExamples.hpp"

#include "DestinationPortFilter.hpp"
#include "DestinationPort.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    DestinationPort destinationPortExpected("35227");
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    DestinationPort destinationPortExpected("55925");
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    DestinationPort destinationPortExpected("34430");
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIcmpUnreachableLine)
{
    DestinationPort destinationPortExpected("");
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}


