#ifndef CAPTURECOMMANDMOCK_HPP_W9EHRIEURHGIEHRG
#define CAPTURECOMMANDMOCK_HPP_W9EHRIEURHGIEHRG

#include "CaptureCommand.hpp"

#include <gmock/gmock.h>

class CaptureCommandMock : public CaptureCommand
{
    public:
        MOCK_METHOD0(getString, std::string());
};

#endif // CAPTURECOMMANDMOCK_HPP_W9EHRIEURHGIEHRG
