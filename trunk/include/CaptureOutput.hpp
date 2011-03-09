#ifndef CAPTUREOUTPUT_HPP_98H9EHG9EHRG
#define CAPTUREOUTPUT_HPP_98H9EHG9EHRG

#include "CaptureCommand.hpp"
#include "GetStringFromStream.hpp"
#include "LinuxPipe.hpp"

#include <string>

class CaptureOutput
{
    public:
        void operator()(CaptureCommand& captureCommand);
        std::string getLine();

    private:
        LinuxPipe pipe;
        GetStringFromStream getStringFromStream;
};

#endif // CAPTUREOUTPUT_HPP_98H9EHG9EHRG
