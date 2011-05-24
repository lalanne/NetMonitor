#ifndef SOURCEPORT802_3FILTER_HPP_92834UT93849T8U34
#define SOURCEPORT802_3FILTER_HPP_92834UT93849T8U34

#include "SourcePortFilter.hpp"

#include <string>

class SourcePort802_3Filter : public SourcePortFilter
{
    public:
        std::string getSourcePort(const std::string line) const;
};

#endif // SOURCEPORT802_3FILTER_HPP_92834UT93849T8U34
