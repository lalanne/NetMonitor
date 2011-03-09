#ifndef TIME_HPP_P9ER8HG9WER8HG9WERH8G
#define TIME_HPP_P9ER8HG9WER8HG9WERH8G

#include <string>

class Time
{
    public:
        Time(const std::string);

        const char* const getPrintFormat() const;
        bool operator==(const Time& ti) const;

    private:
        const std::string time;
};

#endif // TIME_HPP_P9ER8HG9WER8HG9WERH8G
