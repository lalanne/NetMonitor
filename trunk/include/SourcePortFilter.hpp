#ifndef SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN
#define SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN

#include "SourcePort.hpp"

#include <string>

class SourcePortFilter
{
    public:
        SourcePort apply(const std::string line);
};

#endif // SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN
