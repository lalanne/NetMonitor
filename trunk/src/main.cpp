
#include "CaptureOutput.hpp"
#include "CaptureCommand.hpp"
#include "ProcessOutput.hpp"
#include "Tcpdump.hpp"
#include "FileStorage.hpp"
#include <cstdio>

using namespace std;

const string CAPTURE_FILE = "capture.txt";
const string TCPDUMP_ARGUMETS = "-i eth1 -n -e -tttt -q -l not arp";

int main()
{
    Tcpdump captureCommand(TCPDUMP_ARGUMETS);
    CaptureOutput captureOutput;
    captureOutput(captureCommand);
    ProcessOutput processOutput;
    FileStorage storage(CAPTURE_FILE);
    processOutput(captureOutput, storage);

    return 0;
}
