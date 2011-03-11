#ifndef REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG
#define REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG

#include "Date.hpp"
#include "Time.hpp"
#include "IPVersion.hpp"
#include "PacketLenght.hpp"
#include "SourceIp.hpp"
#include "SourcePort.hpp"
#include "DestinationIp.hpp"
#include "DestinationPort.hpp"

class Register
{
    public:
        Register(const Date& date,
                 const Time& time,
                 const IPVersion& ipVersion,
                 const PacketLenght& packetLenght,
                 const SourceIp& sourceIp,
                 const SourcePort& sourcePort,
                 const DestinationIp& destinationIp,
                 const DestinationPort& destinationPort);

    private:
        const Date& date;
        const Time& time;
        const IPVersion& ipVersion;
        const PacketLenght& packetLenght;
        const SourceIp& sourceIp;
        const SourcePort& sourcePort;
        const DestinationIp& destinationIp;
        const DestinationPort& destinationPort;
};

#endif // REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG
