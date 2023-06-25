#include "Application.h"
#include <core/Widget.h>

void Application::init(sptr<Window> mainwindow) {
    _mainWindow = mainwindow;
    if (mainwindow == nullptr) {
        _mainWindow = make_sptr<Window>("sad");
    }
}

void Application::show() {
   // _mainWindow->show();
}
