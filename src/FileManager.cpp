#include "FileManager.h"

void FileManager::createFile(const std::string& fileName) {
    openWrite(fileName);
    close();
}

void FileManager::openRead(const std::string &fileName) {
    if (fd.is_open()) {
        close();
    }
    fd.open(fileName.c_str(), std::ios::in);
}

void FileManager::openWrite(const std::string& fileName) {
    if (fd.is_open()) {
        close();
    }
    fd.open(fileName.c_str(), std::ios::out);
}

void FileManager::close() {
    fd.close();
}

std::vector<std::string> FileManager::read() {
    assertmsg(fd.is_open(), "file is not open");
    std::vector<std::string> buffer;
    std::string line;
    while(std::getline(fd, line)) {
        buffer.push_back(line);
    }
    return buffer;
}

void FileManager::write(const std::string& data) {
    assertmsg(fd.is_open(), "file is not open");
    fd << data;
}
