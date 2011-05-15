#ifndef TRANSPORTINFORMATION_HPP_9W8J4R9J89ERGJ89EJRG
#define TRANSPORTINFORMATION_HPP_9W8J4R9J89ERGJ89EJRG

#include "TransportDestinationInformation.hpp"
#include "TransportSourceInformation.hpp"

class TransportInformation
{
    public:
        TransportInformation(TransportDestinationInformation destination, TransportSourceInformation source);

        TransportDestinationInformation getDestination() const;
        TransportSourceInformation getSource() const;

    private:
        TransportDestinationInformation destination;
        TransportSourceInformation  source;

};

#endif // TRANSPORTINFORMATION_HPP_9W8J4R9J89ERGJ89EJRG
