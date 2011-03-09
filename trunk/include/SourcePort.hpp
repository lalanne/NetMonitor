#ifndef SOURCEPORT_HPP_W9E8HG9WEHRG9E
#define SOURCEPORT_HPP_W9E8HG9WEHRG9E

#include <string>

class SourcePort
{
    public:
        SourcePort(const std::string port);

        const char* const getPrintFormat() const;
        bool operator==(const SourcePort& sPort) const;

    private:
        const std::string sourcePort;
};

#endif // SOURCEPORT_HPP_W9E8HG9WEHRG9E
