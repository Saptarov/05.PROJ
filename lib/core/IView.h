#ifndef IVIEW_H
#define IVIEW_H
#include "ModelData.h"

class IView {
public:
    /*
     * @brief virtual update interface
     * @param input model data of widget
    */
    virtual void update(ModelData* modelData) = 0;
};

#endif // IVIEW_H
