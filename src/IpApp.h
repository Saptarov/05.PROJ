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

    /*
     * @brief constructor of main window
    */
    IpApp();

    /*
     * @brief showing main window
    */
    void show();

    /*
     * @brief creating blank document
    */
    void createNew();

    /*
     * @brief importing file data to buffer
    */
    void importFile();

    /*
     * @brief export buffer to file
    */
    void exportFile();

    /*
     * @brief create button
    */
    void createGraphic();
    void removeGraphic();

private:
    sptr<Widget> button;
    std::string buffer;
    FileManager _fileManager;
};

#endif // IPAPP_H
