#ifndef IPVERSION_HPP_PW9IERHGPWERHGP9EHR
#define IPVERSION_HPP_PW9IERHGPWERHGP9EHR

#include <string>

class IPVersion
{
    public:
        IPVersion(const std::string version);

        const char* const getPrintFormat() const;
        bool operator==(const IPVersion& ipVers) const;

    private:
        const std::string version;
};

#endif // IPVERSION_HPP_PW9IERHGPWERHGP9EHR
