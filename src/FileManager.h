#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <common.h>

class FileManager
{
public:
    void createFile(const std::string& fileName);
    void openRead(const std::string& fileName);
    void openWrite(const std::string& fileName);
    void close();
    std::vector<std::string> read();
    void write(const std::string& data);
private:
    std::fstream fd;
};

#endif // FILEMANAGER_H
