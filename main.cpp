#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "ui.h"
#include "domain.h"
#include "repository.h"
#include "service.h"
#include <vector>
#include <iostream>
#include <string>

void startApplication(){
    UI ui;
    ui.start();
}

int main(){
    startApplication();
    _CrtDumpMemoryLeaks();
    return 0;
}