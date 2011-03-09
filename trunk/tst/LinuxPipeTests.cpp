
#include "LinuxPipe.hpp"
#include "CaptureCommand.hpp"

#include <gtest/gtest.h>

using namespace std;

class CaptureCommandFake : public CaptureCommand
{
    public:
        string getString(){return "someCommand";}
};

TEST(LinuxPipeTests, noErrorsOpeningThePipe)
{
    CaptureCommandFake command;
    LinuxPipe pipe;

    EXPECT_NO_THROW(pipe.open(command));
}
