#ifndef MYEXCEPTION_HPP_W9JRGIOWUHJRIGHW
#define MYEXCEPTION_HPP_W9JRGIOWUHJRIGHW

#include <exception>

class SymbolNotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw();
};

#endif // MYEXCEPTION_HPP_W9JRGIOWUHJRIGHW
