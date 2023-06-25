#ifndef EDITBOX_H
#define EDITBOX_H
#include <core/Widget.h>

class EditBox : public Widget
{
public:
    EditBox(const std::string& name, const std::string text = "");
    void onCreate() override;
    void onDestroy() override;
};

#endif // EDITBOX_H
