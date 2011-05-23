
#include "LineExamples.hpp"

#include "PacketLenghtFilter.hpp"
#include "PacketLenght.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    PacketLenght packetLenghtExpected(LineExamples::packetLenghtLineWith2CharactersLenght);
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter.apply(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    PacketLenght packetLenghtExpected(LineExamples::packetLenghtLineWith3CharactersLenght);
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter.apply(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    PacketLenght packetLenghtExpected(LineExamples::packetLenghtLineWith4CharactersLenght);
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter.apply(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}


