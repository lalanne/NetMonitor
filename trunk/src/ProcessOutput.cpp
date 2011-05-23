
#include "ProcessOutput.hpp"
#include "DateFilter.hpp"
#include "FilterFactory.hpp"

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
    FilterFactory filterFactory;
    Register data(TimeStamp(Date((filterFactory.getDateFilter())->apply(line)),
                            Time((filterFactory.getTimeFilter())->apply(line))),
                PacketInformation(IPVersion((filterFactory.getIpVersionFilter())->apply(line)),
                                  PacketLenght((filterFactory.getPacketLenghtFilter())->apply(line))),
                TransportInformation(TransportDestinationInformation(DestinationIp((filterFactory.getDestinationIpFilter(line))->apply(line)),
                                                                     DestinationPort((filterFactory.getDestinationPortFilter(line))->apply(line))),
                                    TransportSourceInformation(SourceIp((filterFactory.getSourceIpFilter())->apply(line)),
                                                               SourcePort((filterFactory.getSourcePortFilter())->apply(line)))));
    return data;
}

