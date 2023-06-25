#ifndef __WINDOW_H
#define __WINDOW_H
#include <core/Widget.h>

class Window : public Widget {
public:
    Window(const std::string& name);
    void onCreate() override;
    void onDestroy() override;
};

#endif
