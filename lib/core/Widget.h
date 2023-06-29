#ifndef __WIDGET_H
#define __WIDGET_H
#include <common.h>
#include "Controller.h"
#include "WidgetView.h"
#include "WidgetModel.h"

class Widget {
    using childs_ptr_t = std::unordered_map<std::string, sptr<Widget>>;
public:

    /*
     * @brief widget constructor
     * @param assigned name and default label
    */
    Widget(const std::string& name, const std::string label = "");
    virtual ~Widget() = default;

    /*
     * @brief create event
    */
    virtual void onCreate();

    /*
     * @brief destroy event
    */
    virtual void onDestroy();

    /*
     * @brief name getter
     * @return name of widget
    */
    std::string getName();

    /*
     * @brief label getter
     * @return label of widget
    */
    std::string getLabel();

    /*
     * @brief user data getter
     * @return abstract data from pointer when was assigned to widget
    */
    void* getUserData();

    /*
     * @brief return parent widget
     * @return parent widget
    */
    auto getParent();

    /*
     * @brief showing
    */
    void show();

    /*
     * @brief added a new widget to child list
     * @param a new widget
     * @return if has error then returned false
    */
    bool addChild(sptr<Widget>& childWidget);

    /*
     * @brief remove widget from child list
     * @param name of widget
     * @return if has error then returned false
    */
    bool removeChild(std::string name);
    template <typename T>
    auto findChild(std::string name);
protected:
    sptr<WidgetView>     _widgetView;
    sptr<WidgetModel>    _widgetModel;
    sptr<Widget>    _parent;
    childs_ptr_t    _childs;
};

#endif
