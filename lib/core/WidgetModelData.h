#ifndef WIDGETMODELDATA_H
#define WIDGETMODELDATA_H
#include "ModelData.h"
#include <common.h>

/*
 * @brief default widget model data
*/
struct WidgetModelData : public ModelData {
    std::string _name;
    std::string _label;
    void* _userData;
};


#endif // WIDGETMODELDATA_H
