#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model.h"

class Controller
{
    Model* _model;
public:

    /*
     * @brief controlling widget
    */
    Controller(Model* model);
};

#endif // CONTROLLER_H
