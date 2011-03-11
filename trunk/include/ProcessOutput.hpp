#ifndef PROCESSOUTPUT_HPP_PWIEURHGP9WE8RG9ERG
#define PROCESSOUTPUT_HPP_PWIEURHGP9WE8RG9ERG

#include "DateFilter.hpp"
#include "TimeFilter.hpp"
#include "IPVersionFilter.hpp"
#include "PacketLenghtFilter.hpp"
#include "SourceIpFilter.hpp"
#include "SourcePortFilter.hpp"
#include "DestinationIpFilter.hpp"
#include "DestinationPortFilter.hpp"
#include "CaptureOutput.hpp"

class ProcessOutput
{
    public:
        void operator()(CaptureOutput& captureOutput);

    private:
        DateFilter dateFilter;
        TimeFilter timeFilter;
        IPVersionFilter ipVersionFilter;
        PacketLenghtFilter packetLenghtFilter;
        SourceIpFilter sourceIpFilter;
        SourcePortFilter sourcePortFilter;
        DestinationIpFilter destinationIpFilter;
        DestinationPortFilter destinationPortFilter;
};

#endif // PROCESSOUTPUT_HPP_PWIEURHGP9WE8RG9ERG
