
#include "FileStorage.hpp"

using namespace std;

FileStorage::FileStorage(string fileName) : fileName(fileName)
{
}

void FileStorage::open()
{
    printf("loco          \n");
    file.open(fileName.c_str());
}

void FileStorage::close()
{
    file.close();
}

void FileStorage::write(const Register& reg)
{
    file << "Hola.\n";
    file << "Isabel.\n";
}
