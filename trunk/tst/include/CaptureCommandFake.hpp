#ifndef CAPTURECOMMANDFAKE_HPP_OQWEHIUWHEIIWEHFIWUEHF
#define CAPTURECOMMANDFAKE_HPP_OQWEHIUWHEIIWEHFIWUEHF

#include "CaptureCommand.hpp"

#include <string>

class CaptureCommandFake : public CaptureCommand
{
    public:
        std::string getString(){return "someCommand";}
};


#endif // CAPTURECOMMANDFAKE_HPP_OQWEHIUWHEIIWEHFIWUEHF
