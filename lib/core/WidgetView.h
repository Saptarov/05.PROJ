#ifndef BASEVIEW_H
#define BASEVIEW_H
#include "View.h"
#include "ModelData.h"

class WidgetModelData;
class WidgetView : public View
{
public:
    WidgetView();
    void updateData(ModelData* modelData) override;
    void update(WidgetModelData* modelData);
private:
};

#endif // BASEVIEW_H
