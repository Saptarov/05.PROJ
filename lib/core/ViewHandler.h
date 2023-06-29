#ifndef VIEWHANDLER_H
#define VIEWHANDLER_H
#include "IView.h"
#include "ModelData.h"
class ViewHandler
{
protected:

    /*
     * @brief Handler for View
    */
    ViewHandler(IView* view);
    void udateView(ModelData* modelData);
private:
    IView* _view;
};

#endif // VIEWHANDLER_H
