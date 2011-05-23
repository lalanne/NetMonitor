
#include "LineExamples.hpp"

#include "FileStorage.hpp"
#include "Register.hpp"

#include <gtest/gtest.h>

using namespace std;

static const string FILE_TEST = "test.txt";

TEST(FileStorageTests, open)
{
    FileStorage storage(FILE_TEST);
    EXPECT_NO_THROW(storage.open());
    storage.close();
}

TEST(FileStorageTests, writeValidRegister)
{
    FileStorage storage(FILE_TEST);
    Register data(TimeStamp(Date(LineExamples::dateLine), Time(LineExamples::timeLine)),
                PacketInformation(IPVersion(LineExamples::ipVersion4), PacketLenght(LineExamples::packetLenghtLine)),
                TransportInformation(TransportDestinationInformation(DestinationIp(LineExamples::destinationIpLine),
                                                                    DestinationPort(LineExamples::destinationPortLine)),
                                    TransportSourceInformation(SourceIp(LineExamples::sourceIpLine),
                                                            SourcePort(LineExamples::sourcePortLine))));
    storage.open();
    Register lineRegister(data);

    EXPECT_NO_THROW(storage.write(lineRegister));
}
