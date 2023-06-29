#ifndef VIEW_H
#define VIEW_H
#include "IView.h"

class View : public IView
{
    friend class Model;
public:

    /*
     * @brief Implement view context of widget
    */
    View();
    void update(ModelData* modelData) override;
    virtual void updateData(ModelData* modelData) = 0;
};

#endif // VIEW_H
