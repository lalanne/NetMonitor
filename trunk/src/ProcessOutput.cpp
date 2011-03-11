
#include "ProcessOutput.hpp"
#include "Date.hpp"
#include "DateFilter.hpp"
#include "Time.hpp"
#include "IPVersion.hpp"
#include "PacketLenght.hpp"
#include "SourceIp.hpp"
#include "SourcePort.hpp"
#include "DestinationIp.hpp"
#include "DestinationPort.hpp"

#include <string>

using namespace std;

void ProcessOutput::operator()(CaptureOutput& captureOutput)
{
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

