#ifndef IPAPP_H
#define IPAPP_H
#include <widgets/Application.h>
#include <widgets/Window.h>
#include <widgets/Button.h>
#include <widgets/EditBox.h>
#include "FileManager.h"
class IpApp : public Application
{
public:
    IpApp();
    void show();
    void createNew();
    void importFile();
    void exportFile();
    void createGraphic();
    void removeGraphic();

private:
    Button* button;
    std::string buffer;
    FileManager _fileManager;
};

#endif // IPAPP_H
