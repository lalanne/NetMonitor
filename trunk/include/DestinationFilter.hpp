#ifndef DESTINATIONFILTER_HPP_W983RHGFIUWEHGUWEHG
#define DESTINATIONFILTER_HPP_W983RHGFIUWEHGUWEHG

#include <string>

class DestinationFilter
{
    public:
        std::string getDestinationPartOfTheLine(const std::string line) const;
        std::string extractLine(const std::string line) const;
        std::string getTheStablePartOfTheLine(const std::string line) const;
        std::string getRawDestinationPartOfTheLine(const std::string line) const;
        std::string eraseTheFrontOfTheDestinationLine(std::string line) const;
        std::string getDestinationIpAndPort(const std::string line) const;
};

#endif // DESTINATIONFILTER_HPP_W983RHGFIUWEHGUWEHG
