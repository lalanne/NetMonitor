#ifndef REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG
#define REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG

#include "TimeStamp.hpp"
#include "PacketInformation.hpp"
#include "TransportInformation.hpp"

class Register
{
    public:
        Register(TimeStamp timeStamp,
                PacketInformation packetInformation,
                TransportInformation transportInformation);

        TimeStamp getTimeStamp() const;
        PacketInformation getPacketInformation() const;
        TransportInformation getTransportInformation() const;

    private:
        TimeStamp timeStamp;
        PacketInformation packetInformation;
        TransportInformation transportInformation;
};

#endif // REGISTER_HPP_P9HGP9EWHRGIUEWHGRIWEHRG
