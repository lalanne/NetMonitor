#ifndef TIMESTAMP_HPP_P98HERIWUEHGIHWEG
#define TIMESTAMP_HPP_P98HERIWUEHGIHWEG

#include "Time.hpp"
#include "Date.hpp"

class TimeStamp
{
    public:
        TimeStamp(Date date, Time time);

        Date getDate() const;
        Time getTime() const;

    private:
        Time time;
        Date date;
};

#endif // TIMESTAMP_HPP_P98HERIWUEHGIHWEG
