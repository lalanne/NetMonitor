#ifndef PIPE_HPP_P9IERHIEURHIEHRG
#define PIPE_HPP_P9IERHIEURHIEHRG

#include "CaptureCommand.hpp"

#include <cstdio>

class LinuxPipe
{
    public:
        LinuxPipe();

         void open(CaptureCommand& captureCommand);
         FILE* const getHandler() const;

    private:
        FILE* pipeHandler;
};

#endif // PIPE_HPP_P9IERHIEURHIEHRG
