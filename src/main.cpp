#include <common.h>
#include "IpApp.h"

int main () {
    IpApp app;
    app.show();
    app.createNew();
    app.importFile();
    app.exportFile();
    app.createGraphic();
    app.removeGraphic();
    return 0;
}
