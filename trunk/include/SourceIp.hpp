#ifndef SOURCEIP_HPP_W0E89R9E8WJRGBNC
#define SOURCEIP_HPP_W0E89R9E8WJRGBNC

#include <string>

class SourceIp
{
    public:
        SourceIp(const std::string ip);

        const char* const getPrintFormat() const;
        bool operator==(const SourceIp& sIp) const;

    private:
        const std::string sourceIp;
};

#endif // SOURCEIP_HPP_W0E89R9E8WJRGBNC
