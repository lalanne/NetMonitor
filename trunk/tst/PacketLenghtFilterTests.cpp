
#include "PacketLenghtFilter.hpp"
#include "PacketLenght.hpp"

#include <gtest/gtest.h>
#include <string>

using namespace std;

const string LINE_WITH_2_CHARACTERS_LENGHT =
    "2011-03-09 01:05:00.359547 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 66: 200.27.57.13.80 > 192.168.1.3.35227: tcp 0";
const string LINE_WITH_3_CHARACTERS_LENGHT =
    "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";
const string LINE_WITH_4_CHARACTERS_LENGHT =
    "2011-03-09 12:48:48.756365 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 1496: 200.27.57.9.1935 > 192.168.1.3.34430: tcp 1430";

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith2CharactersLenght)
{
    PacketLenght packetLenghtExpected("66");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LINE_WITH_2_CHARACTERS_LENGHT);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith3CharactersLenght)
{
    PacketLenght packetLenghtExpected("890");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LINE_WITH_3_CHARACTERS_LENGHT);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}

TEST(PacketLenghtFilterTests, appliedFilterToIPv4LineWith4CharactersLenght)
{
    PacketLenght packetLenghtExpected("1496");
    PacketLenghtFilter filter;
    PacketLenght packetLenghtActual = filter(LINE_WITH_4_CHARACTERS_LENGHT);

    EXPECT_TRUE(packetLenghtExpected==packetLenghtActual);
}


