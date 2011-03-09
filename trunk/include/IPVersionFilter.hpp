#ifndef IPVERSIONFILTER_HPP_WPE9HGPWERHGII
#define IPVERSIONFILTER_HPP_WPE9HGPWERHGII

#include "IPVersion.hpp"

#include <string>

class IPVersionFilter
{
    public:
        IPVersion operator()(const std::string line);
};

#endif // IPVERSIONFILTER_HPP_WPE9HGPWERHGII
