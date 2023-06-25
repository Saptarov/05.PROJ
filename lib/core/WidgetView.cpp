#include "WidgetView.h"
#include "WidgetModel.h"
#include "WidgetModelData.h"
#include <common.h>

WidgetView::WidgetView()
{

}

void WidgetView::updateData(ModelData* modelData) {
    WidgetModelData* widgetModelData =  dynamic_cast<WidgetModelData*>(modelData);
    update(widgetModelData);
}

void WidgetView::update(WidgetModelData* modelData) {
    std::cout << modelData->_name << std::endl;
}
