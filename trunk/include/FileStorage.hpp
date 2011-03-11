#ifndef FILESTORAGE_HPP_WE9IR8HG98H943HGWHG
#define FILESTORAGE_HPP_WE9IR8HG98H943HGWHG

#include "Register.hpp"

#include <fstream>
#include <string>

class FileStorage
{
    public:
        FileStorage(std::string fileName);

        void open();
        void close();
        void write(const Register& reg);

    private:
        const std::string fileName;
        std::ofstream file;
};

#endif // FILESTORAGE_HPP_WE9IR8HG98H943HGWHG
