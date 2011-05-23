#ifndef SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN
#define SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN

#include "SourcePort.hpp"
#include "SourceFilter.hpp"

#include <string>

class SourcePortFilter
{
    public:
        SourcePort apply(const std::string line);

    private:
        virtual std::string getSourcePort(const std::string line) const;

    private:
        SourceFilter sourceFilter;
};

#endif // SOURCEPORTFILTER_HPP_W08R7EHF9WE8HRGWEHRN
