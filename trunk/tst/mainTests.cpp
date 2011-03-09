
#include "CaptureOutput.hpp"
#include "CaptureCommand.hpp"
#include "ProcessOutput.hpp"
#include "Tcpdump.hpp"

#include <gtest/gtest.h>

using namespace std;

TEST(mainTests, mainWithTcpDump)
{
    string arguments = "-i eth1 -n -e -tttt -q -l not arp";
    Tcpdump captureCommand(arguments);
    CaptureOutput captureOutput;
    captureOutput(captureCommand);
    ProcessOutput processOutput;
    processOutput(captureOutput);

    EXPECT_EQ(1, 0);
}
