
#include "FileStorage.hpp"
#include "Register.hpp"

#include <gtest/gtest.h>

TEST(FileStorageTests, open)
{
    FileStorage storage("test.txt");
    EXPECT_NO_THROW(storage.open());
    storage.close();
}

TEST(FileStorageTests, writeValidRegister)
{

    FileStorage storage("test.txt");
    Date date("2011-03-07");
    Time time("17:34:35.785128");
    IPVersion ipVersion("IPv4");
    PacketLenght packetLenght("890");
    SourceIp sourceIp("199.59.148.20");
    SourcePort sourcePort("443");
    DestinationIp destinationIp("192.168.1.3");
    DestinationPort destinationPort("55925");
    storage.open();
    Register lineRegister(date,
                          time,
                          ipVersion,
                          packetLenght,
                          sourceIp,
                          sourcePort,
                          destinationIp,
                          destinationPort);

    EXPECT_NO_THROW(storage.write(lineRegister));
}
