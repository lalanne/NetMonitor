#ifndef DESTINATIONIP_HPP_0W8ERHERIHWPEIRNFJBDS
#define DESTINATIONIP_HPP_0W8ERHERIHWPEIRNFJBDS

#include <string>

class DestinationIp
{
    public:
        DestinationIp(const std::string ip);

        const char* const getPrintFormat() const;
        bool operator==(const DestinationIp& dIp) const;

    private:
        const std::string destinationIp;
};

#endif // DESTINATIONIP_HPP_0W8ERHERIHWPEIRNFJBDS
