#ifndef LINEFILTER_HPP_WIUERIGUWEHRG98
#define LINEFILTER_HPP_WIUERIGUWEHRG98

#include <string>

class LineFilter
{
    public:
        std::string getTheStablePartOfTheLine(const std::string line) const;
        std::string extractLine(const std::string line) const;
};

#endif // LINEFILTER_HPP_WIUERIGUWEHRG98
