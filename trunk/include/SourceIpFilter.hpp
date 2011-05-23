#ifndef SOURCEIPFILTER_HPP_WPIURN9W8R9G8G
#define SOURCEIPFILTER_HPP_WPIURN9W8R9G8G

#include "SourceIp.hpp"
#include "SourceFilter.hpp"

#include <string>

class SourceIpFilter
{
    public:
        SourceIp apply(const std::string line);

    private:
        SourceFilter sourceFilter;
};

#endif // SOURCEIPFILTER_HPP_WPIURN9W8R9G8G
