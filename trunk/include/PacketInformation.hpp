#ifndef PACKETINFORMATION_HPP_WJDFIUSHDIFUHAS
#define PACKETINFORMATION_HPP_WJDFIUSHDIFUHAS

#include "IPVersion.hpp"
#include "PacketLenght.hpp"

class PacketInformation
{
    public:
        PacketInformation(IPVersion ipVersion, PacketLenght lenght);

        PacketLenght getLenght() const;
        IPVersion getIpVersion() const;

    private:
        IPVersion ipVersion;
        PacketLenght lenght;
};

#endif // PACKETINFORMATION_HPP_WJDFIUSHDIFUHAS
