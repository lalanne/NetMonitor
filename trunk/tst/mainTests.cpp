
#include "CaptureOutput.hpp"
#include "CaptureCommand.hpp"
#include "ProcessOutput.hpp"
#include "Tcpdump.hpp"
#include "FileStorage.hpp"

#include <gtest/gtest.h>

using namespace std;

TEST(mainTests, mainWithTcpDump)
{
    string captureCommandArguments = "-i eth1 -n -e -tttt -q -l not arp";
    Tcpdump captureCommand(captureCommandArguments);

    CaptureOutput captureOutput;
    captureOutput(captureCommand);

    ProcessOutput processOutput;
    FileStorage storage("test1.txt");
    processOutput(captureOutput, storage);

    EXPECT_EQ(1, 0);
}
