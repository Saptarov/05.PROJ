#ifndef BASEMODEL_H
#define BASEMODEL_H
#include "Model.h"
#include "WidgetView.h"

class WidgetModelData;
class WidgetModel : public Model
{
public:
    WidgetModel(WidgetView* view);
    void setName(std::string name);
    void setLabel(std::string label);
    void setUserData(void* userData);
    WidgetModelData* getModelData() {return _modelData;}
private:
    WidgetModelData* _modelData;
};

#endif // BASEMODEL_H
