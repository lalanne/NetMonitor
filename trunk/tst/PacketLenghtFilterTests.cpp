
#include "LineExamples.hpp"

#include "PacketLenghtFilter.hpp"
#include "PacketLenght.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    PacketLenght packetLenghtExpected("66");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LineExamples::lineWith2CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    PacketLenght packetLenghtExpected("890");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LineExamples::lineWith3CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    PacketLenght packetLenghtExpected("1496");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LineExamples::lineWith4CharactersLenght);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}


