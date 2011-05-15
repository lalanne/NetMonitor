#ifndef TRANSPORTDESTINATIONINFORMATION_HPP_E8R98JER9G8JER9GJ9ERJG
#define TRANSPORTDESTINATIONINFORMATION_HPP_E8R98JER9G8JER9GJ9ERJG

#include "DestinationIp.hpp"
#include "DestinationPort.hpp"

class TransportDestinationInformation
{
    public:
        TransportDestinationInformation(DestinationIp ip, DestinationPort port);

        DestinationPort getPort() const;
        DestinationIp getIp() const;

    private:
        DestinationIp ip;
        DestinationPort port;
};

#endif // TRANSPORTDESTINATIONINFORMATION_HPP_E8R98JER9G8JER9GJ9ERJG
