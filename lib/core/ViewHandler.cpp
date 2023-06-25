#include "ViewHandler.h"

ViewHandler::ViewHandler(IView* view)
    : _view(view)
{}

void ViewHandler::udateView(ModelData* modelData) {
    _view->update(modelData);
}
