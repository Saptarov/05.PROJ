#ifndef BASEMODEL_H
#define BASEMODEL_H
#include "Model.h"
#include "WidgetView.h"

class WidgetModelData;
class WidgetModel : public Model
{
public:

    /*
     * @brief widget model constructor
    */
    WidgetModel(WidgetView* view);

    /*
     * @brief widget base name setter
     * @param a new name
    */
    void setName(std::string name);

    /*
     * @brief widget label setter
     * @param a new label
    */
    void setLabel(std::string label);

    /*
     * @brief widget user data setter
     * @param new pointer to user data
    */
    void setUserData(void* userData);
    WidgetModelData* getModelData() {return _modelData;}
private:
    WidgetModelData* _modelData;
};

#endif // BASEMODEL_H
