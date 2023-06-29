#ifndef BASEVIEW_H
#define BASEVIEW_H
#include "View.h"
#include "ModelData.h"

class WidgetModelData;
class WidgetView : public View
{
public:

    /*
     * @brief Widget view construct
    */
    WidgetView();

    /*
     * @brief update widget model
     * @param default model data
    */
    void updateData(ModelData* modelData) override;

    /*
     * @brief update widget model
     * @param default model data
    */
    void update(WidgetModelData* modelData);
private:
};

#endif // BASEVIEW_H
