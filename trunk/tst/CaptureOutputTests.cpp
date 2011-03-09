
#include "CaptureCommand.hpp"
#include "CaptureOutput.hpp"
#include "Tcpdump.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

class CaptureCommandMock : public CaptureCommand
{
    public:
        MOCK_METHOD0(getString, string());
};


TEST(CaptureOutputTests, shouldCallExecuteCaptureCommandOneTime)
{
    CaptureCommandMock captureCommand;

    EXPECT_CALL(captureCommand, getString()).Times(1);

    CaptureOutput captureOutput;
    captureOutput(captureCommand);
}

