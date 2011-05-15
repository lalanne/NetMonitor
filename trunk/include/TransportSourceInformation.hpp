#ifndef TRANSPORTSOURCEINFORMATION_HPP_0Q8HEF8HWE8FH7W8FEH8WEF7H
#define TRANSPORTSOURCEINFORMATION_HPP_0Q8HEF8HWE8FH7W8FEH8WEF7H

#include "SourceIp.hpp"
#include "SourcePort.hpp"

class TransportSourceInformation
{
    public:
        TransportSourceInformation(SourceIp ip, SourcePort port);

        SourcePort getPort() const;
        SourceIp getIp() const;

    private:
        SourceIp ip;
        SourcePort port;

};

#endif // TRANSPORTSOURCEINFORMATION_HPP_0Q8HEF8HWE8FH7W8FEH8WEF7H
