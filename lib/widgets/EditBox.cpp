#include "EditBox.h"

EditBox::EditBox(const std::string& name, const std::string text)
    : Widget(name, text)
{}

void EditBox::onCreate() {
    print_event(getName());
}
void EditBox::onDestroy() {
    print_event(getName());
}
