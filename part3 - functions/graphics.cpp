#include <iostream>
#include "graphics.h"

static int initGPU();
static int setGraphicsMode();

int initGPU() {
    return 1;
}

int setGraphicsMode() {
    return 1;
}

int initGraphics() {
    initGPU();
    setGraphicsMode();

    return 1;
}

int drawSprite() {
    return 1;
}
