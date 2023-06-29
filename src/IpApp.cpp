#include "IpApp.h"

IpApp::IpApp()
{
    _mainWindow =  make_sptr<Window>("mainWindow");
}

void IpApp::show() {
    _mainWindow->show();
    std::cout << "main window show" << std::endl;
}

void IpApp::createNew()
{
    _fileManager.createFile("blank");
    std::cout << "blank created" << std::endl;
}

void IpApp::importFile()
{
    _fileManager.openRead("blank");
    auto data = _fileManager.read();
    for (const auto &str : data) {
        buffer += str;
    }
    _fileManager.close();
    std::cout << "blank file was imported" << std::endl;
}

void IpApp::exportFile()
{
    _fileManager.openWrite("blank");
    _fileManager.write(buffer);
    _fileManager.close();
    std::cout << "blank file was exported" << std::endl;

}

void IpApp::createGraphic()
{
    button = make_sptr<Button>("btn1", "push");
    if (!_mainWindow->addChild(button)) {
        std::cout << "widget btn1 successful added" << std::endl;
        return;
    }
    std::cout << "error when adding an graphic" << std::endl;
}

void IpApp::removeGraphic() {
    if (_mainWindow->removeChild(button->getName())) {
        std::cout << "graphic " << button->getName() << " removed" << std::endl;
        return;
    }
    std::cout << "failed to remove graphic " << button->getName() << std::endl;
}
