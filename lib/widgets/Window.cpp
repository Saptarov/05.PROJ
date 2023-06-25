#include "Window.h"

Window::Window(const std::string& name)
    : Widget(name)
{}

void Window::onCreate() {
    print_event(getName());
}
void Window::onDestroy() {
    print_event(getName());
}
