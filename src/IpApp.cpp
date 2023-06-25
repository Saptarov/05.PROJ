#include "IpApp.h"

IpApp::IpApp()
{
    _mainWindow =  make_sptr<Window>("mainWindow");
}

void IpApp::show() {
    _mainWindow->show();
}

void IpApp::createNew()
{
    _fileManager.createFile("blank");
}

void IpApp::importFile()
{
    _fileManager.openRead("blank");
    auto data = _fileManager.read();
    for (const auto &str : data) {
        buffer += str;
    }
    _fileManager.close();
}

void IpApp::exportFile()
{
    _fileManager.openWrite("blank");
    _fileManager.write(buffer);
    _fileManager.close();

}

void IpApp::createGraphic()
{
    button = new Button("btn1", "push");
}

void IpApp::removeGraphic() {
    delete button;
    button = nullptr;
}
