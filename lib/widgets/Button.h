#ifndef BUTTON_H
#define BUTTON_H
#include <core/Widget.h>

class Button : public Widget
{
public:
    Button(const std::string& name, const std::string& label);
    ~Button() = default;
    void onCreate() override;
    void onDestroy() override;
    void onPush();
};

#endif // BUTTON_H
