#include "Register.hpp"

Register::Register(TimeStamp timeStamp,
                PacketInformation packetInformation,
                TransportInformation transportInformation) :
                timeStamp(timeStamp),
                packetInformation(packetInformation),
                transportInformation(transportInformation)
{
}

TimeStamp Register::getTimeStamp() const
{
    return timeStamp;
}

PacketInformation Register::getPacketInformation() const
{
    return packetInformation;
}

TransportInformation Register::getTransportInformation() const
{
    return transportInformation;
}

