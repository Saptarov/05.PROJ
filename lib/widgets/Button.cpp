#include "Button.h"

Button::Button(const std::string& name, const std::string& label)
    : Widget(name, label)
{}

void Button::onCreate() {
    print_event(getName());
}

void Button::onDestroy() {
    print_event(getName());
}

void Button::onPush() {
    print_event(getName());
}
