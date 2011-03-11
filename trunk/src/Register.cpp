#include "Register.hpp"

Register::Register(const Date& date,
                const Time& time,
                const IPVersion& ipVersion,
                const PacketLenght& packetLenght,
                const SourceIp& sourceIp,
                const SourcePort& sourcePort,
                const DestinationIp& destinationIp,
                const DestinationPort& destinationPort) :
                date(date),
                time(time),
                ipVersion(ipVersion),
                packetLenght(packetLenght),
                sourceIp(sourceIp),
                sourcePort(sourcePort),
                destinationIp(destinationIp),
                destinationPort(destinationPort)
{

}

