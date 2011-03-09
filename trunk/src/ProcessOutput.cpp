
#include "ProcessOutput.hpp"
#include "Date.hpp"
#include "DateFilter.hpp"
#include "Time.hpp"
#include "TimeFilter.hpp"
#include "IPVersion.hpp"
#include "IPVersionFilter.hpp"
#include "PacketLenght.hpp"
#include "PacketLenghtFilter.hpp"
#include "SourceIp.hpp"
#include "SourceIpFilter.hpp"
#include "SourcePort.hpp"
#include "SourcePortFilter.hpp"
#include "DestinationIp.hpp"
#include "DestinationIpFilter.hpp"
#include "DestinationPort.hpp"
#include "DestinationPortFilter.hpp"

#include <string>

using namespace std;

void ProcessOutput::operator()(CaptureOutput& captureOutput)
{
    DateFilter dateFilter;
    TimeFilter timeFilter;
    IPVersionFilter ipVersionFilter;
    PacketLenghtFilter packetLenghtFilter;
    SourceIpFilter sourceIpFilter;
    SourcePortFilter sourcePortFilter;
    DestinationIpFilter destinationIpFilter;
    DestinationPortFilter destinationPortFilter;

    while(true)
    {
        string line = captureOutput.getLine();
        Date date(dateFilter(line));
        Time time(timeFilter(line));
        IPVersion ipVersion(ipVersionFilter(line));
        PacketLenght packetLenght(packetLenghtFilter(line));
        SourceIp sourceIp(sourceIpFilter(line));
        SourcePort sourcePort(sourcePortFilter(line));
        DestinationIp destinationIp(destinationIpFilter(line));
        DestinationPort destinationPort(destinationPortFilter(line));

        printf("%s\n", line.c_str());
        printf("Date: %s\n", date.getPrintFormat());
        printf("Time: %s\n", time.getPrintFormat());
        printf("IP version: %s\n", ipVersion.getPrintFormat());
        printf("packetLenght: %s\n", packetLenght.getPrintFormat());
        printf("Source Ip: %s\n", sourceIp.getPrintFormat());
        printf("Source Port: %s\n", sourcePort.getPrintFormat());
        printf("Destination Ip: %s\n", destinationIp.getPrintFormat());
        printf("Destination Port: %s\n", destinationPort.getPrintFormat());
    }
}

