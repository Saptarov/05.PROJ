#ifndef __WIDGET_H
#define __WIDGET_H
#include <common.h>
#include "Controller.h"
#include "WidgetView.h"
#include "WidgetModel.h"

class Widget {
    using childs_ptr_t = std::unordered_map<std::string, sptr<Widget>>;
public:
    Widget(const std::string& name, const std::string label = "");
    virtual ~Widget() = default;
    virtual void onCreate();
    virtual void onDestroy();
    std::string getName();
    std::string getLabel();
    void* getUserData();
    auto getParent();
    void show();
    bool addChild(sptr<Widget>& childWidget);
    template <typename T>
    auto findChild(std::string name);
protected:
    sptr<WidgetView>     _widgetView;
    sptr<WidgetModel>    _widgetModel;
    sptr<Widget>    _parent;
    childs_ptr_t    _childs;
};

#endif
