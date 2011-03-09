#ifndef DESTINATIONPORT_HPP_WERH83YH8HEWRHERUIHVCN
#define DESTINATIONPORT_HPP_WERH83YH8HEWRHERUIHVCN

#include "DestinationPort.hpp"

#include <string>

class DestinationPort
{
    public:
        DestinationPort(const std::string port);

        const char* const getPrintFormat() const;
        bool operator==(const DestinationPort& dPort) const;

    private:
        const std::string destinationPort;
};

#endif // DESTINATIONPORT_HPP_WERH83YH8HEWRHERUIHVCN
