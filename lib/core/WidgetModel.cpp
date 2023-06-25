#include "WidgetModel.h"
#include "WidgetModelData.h"

WidgetModel::WidgetModel(WidgetView* view)
    : Model(view)
{
    _modelData = new WidgetModelData();
}

void WidgetModel::setName(std::string name) {
    _modelData->_name = name;
    udateView(_modelData);
}

void WidgetModel::setLabel(std::string label) {
    _modelData->_label = label;
    udateView(_modelData);
}

void WidgetModel::setUserData(void* userData) {
    _modelData->_userData = userData;
    udateView(_modelData);
}
