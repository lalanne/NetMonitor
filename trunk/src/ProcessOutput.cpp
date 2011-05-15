
#include "ProcessOutput.hpp"
#include "DateFilter.hpp"

#include <string>

using namespace std;

void ProcessOutput::operator()(CaptureOutput& captureOutput, FileStorage& storage)
{
    storage.open();
    readingData(captureOutput, storage);
    storage.close();
}

void ProcessOutput::readingData(CaptureOutput& captureOutput, FileStorage& storage)
{
    while(true)
    {
        string line = captureOutput.getLine();
        printf("%s\n", line.c_str());
        storage.write(applyDataFilters(line));
    }
}

Register ProcessOutput::applyDataFilters(string line)
{
    Register data(TimeStamp(Date(dateFilter(line)), Time(timeFilter(line))),
                PacketInformation(IPVersion(ipVersionFilter(line)), PacketLenght(packetLenghtFilter(line))),
                TransportInformation(TransportDestinationInformation(DestinationIp(destinationIpFilter(line)),
                                                                    DestinationPort(destinationPortFilter(line))),
                                        TransportSourceInformation(SourceIp(sourceIpFilter(line)),
                                                                SourcePort(sourcePortFilter(line)))));
    return data;
}

