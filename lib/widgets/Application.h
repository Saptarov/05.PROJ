#ifndef APPLICATION_H
#define APPLICATION_H
#include <common.h>
#include "Window.h"

class Widget;
class Application
{
public:
    Application() = default;
    void init(std::shared_ptr<Window> mainwindow = nullptr);
    void show();
protected:
    sptr<Window> _mainWindow;

};

#endif // APPLICATION_H
