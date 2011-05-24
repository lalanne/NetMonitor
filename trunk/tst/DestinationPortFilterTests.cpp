
#include "LineExamples.hpp"

#include "DestinationPortFilter.hpp"
#include "DestinationPortIcmpUnreacheableFilter.hpp"
#include "DestinationPort802_3Filter.hpp"
#include "DestinationPort.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith2CharactersLenght);
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter.apply(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith3CharactersLenght);
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter.apply(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineWith4CharactersLenght);
    DestinationPortFilter filter;
    DestinationPort destinationPortActual = filter.apply(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterToIcmpUnreachableLine)
{
    DestinationPort destinationPortExpected(LineExamples::destinationPortLineIcmpUnreacheable);
    DestinationPortIcmpUnreacheableFilter filter;
    DestinationPort destinationPortActual = filter.apply(LineExamples::lineIcmpUnreacheable);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

TEST(DestinationPortFilterTests, appliedFilterTo802_3Line)
{
    DestinationPort destinationPortExpected(LineExamples::destinationPortLine802_3);
    DestinationPort802_3Filter filter;
    DestinationPort destinationPortActual = filter.apply(LineExamples::line802_3);

    EXPECT_TRUE(destinationPortExpected==destinationPortActual);
}

