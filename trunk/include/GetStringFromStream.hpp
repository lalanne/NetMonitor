#ifndef GETSTRINGFROMSTREAM_HPP_9E8RHG9EH8RG9WEHRG
#define GETSTRINGFROMSTREAM_HPP_9E8RHG9EH8RG9WEHRG

#include "LinuxPipe.hpp"

#include <string>

class GetStringFromStream
{
    public:
        std::string operator()(LinuxPipe& pipe) const;
};

#endif // GETSTRINGFROMSTREAM_HPP_9E8RHG9EH8RG9WEHRG
