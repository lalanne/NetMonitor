#ifndef SOURCEPORTICMPUNREACHEABLEFILTER_HPP_WI9UERHIGWUHERGIUHWERG
#define SOURCEPORTICMPUNREACHEABLEFILTER_HPP_WI9UERHIGWUHERGIUHWERG

#include "SourcePortFilter.hpp"

#include <string>

class SourcePortIcmpUnreacheableFilter : public SourcePortFilter
{
    public:
        std::string getSourcePort(const std::string line) const;
};

#endif // SOURCEPORTICMPUNREACHEABLEFILTER_HPP_WI9UERHIGWUHERGIUHWERG
