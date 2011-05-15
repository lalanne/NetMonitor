
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
    Register data(TimeStamp(Date("2011-03-07"), Time("17:34:35.785128")),
                PacketInformation(IPVersion("IPv4"), PacketLenght("890")),
                TransportInformation(TransportDestinationInformation(DestinationIp("192.168.1.3"),
                                                                    DestinationPort("55925")),
                                    TransportSourceInformation(SourceIp("199.59.148.20"),
                                                            SourcePort("443"))));
    storage.open();
    Register lineRegister(data);

    EXPECT_NO_THROW(storage.write(lineRegister));
}
