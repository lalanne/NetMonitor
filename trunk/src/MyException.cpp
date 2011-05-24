#include "MyException.hpp"

const char* MyException::what() const throw()
{
    return "Error: Internal software problem.";
}
