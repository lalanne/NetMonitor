#ifndef DATE_HPP_WP9ERGH9RH8G9HERG
#define DATE_HPP_WP9ERGH9RH8G9HERG

#include <string>

class Date
{
    public:
        Date(const std::string date);

        const char* const getPrintFormat() const;
        bool operator==(const Date& da) const;

    private:
        const std::string date;
};

#endif // DATE_HPP_WP9ERGH9RH8G9HERG
