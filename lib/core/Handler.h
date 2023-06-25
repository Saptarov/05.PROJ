#ifndef HANDLER_H
#define HANDLER_H
#include <common.h>
#include "View.h"

class Handler
{
public:
    /*
     * @brief virtual update interface
     * @param input model data of widget
    */
    Handler();
private:
    std::vector<View*> _views;
};

#endif // HANDLER_H
