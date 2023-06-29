#include "Widget.h"
#include "WidgetModelData.h"


Widget::Widget(const std::string& name, const std::string label)
{
    _widgetView = make_sptr<WidgetView>();
    _widgetModel = make_sptr<WidgetModel>(_widgetView.get());
    _widgetModel->setName(name);
    _widgetModel->setLabel(label);
}

void Widget::onCreate() {
    assertmsg(false, "Error: func \"onCreate\" is not implement");
}
void Widget::onDestroy() {
    assertmsg(false, "Error: func \"onDestroy\" is not implement");
}

auto Widget::getParent() {
    return _parent;
}

void Widget::show() {
    mout("Widget " + getName() + " is showed");
}

bool Widget::addChild(sptr<Widget>& childWidget) {
    if (childWidget != nullptr) {
        return _childs.insert(std::pair<std::string, sptr<Widget>> (childWidget->getName(), childWidget)).second;
    }
    return false;
}

bool Widget::removeChild(std::string name) {
    auto iter = _childs.find(name);
    if (iter != _childs.end()) {
        _childs.erase(iter);
        return true;
    }
    return false;
}

template <typename T>
auto Widget::findChild(std::string name) {
    auto iter = _childs.find(name);
    if (iter != _childs.end()) {
        return iter->second;
    }
    return nullptr;
}

std::string Widget::getName() {
    assert(_widgetModel != nullptr);
    return _widgetModel->getModelData()->_name;
}
std::string Widget::getLabel() {
    assert(_widgetModel != nullptr);
    return _widgetModel->getModelData()->_label;

}
void* Widget::getUserData() {
    assert(_widgetModel != nullptr);
    return _widgetModel->getModelData()->_userData;
}
