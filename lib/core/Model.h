#ifndef __MODEL_H
#define __MODEL_H
#include <common.h>
#include "ViewHandler.h"
#include "View.h"
#include "ModelData.h"

class Model : public ViewHandler
{
public:
    /*
     * @brief model constructor
     * @param input view class
    */
    Model(View* view);
};

#endif
