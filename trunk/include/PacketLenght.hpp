#ifndef PACKETLENGHT_HPP_WP9ERG9WERJG9JERG
#define PACKETLENGHT_HPP_WP9ERG9WERJG9JERG

#include <string>

class PacketLenght
{
    public:
        PacketLenght(const std::string version);

        const char* const getPrintFormat() const;
        bool operator==(const PacketLenght& pl) const;

    private:
        const std::string packetLenght;
};

#endif // PACKETLENGHT_HPP_WP9ERG9WERJG9JERG
