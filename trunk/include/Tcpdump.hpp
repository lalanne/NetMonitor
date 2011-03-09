#ifndef TCPDUMP_HPP_98WER9HGER9G
#define TCPDUMP_HPP_98WER9HGER9G

#include "CaptureCommand.hpp"

#include <string>

class Tcpdump : public CaptureCommand
{
    public:
        Tcpdump(std::string arguments);

        std::string getString();

    private:
        std::string arguments;
        const std::string command;

};

#endif // TCPDUMP_HPP_98WER9HGER9G
