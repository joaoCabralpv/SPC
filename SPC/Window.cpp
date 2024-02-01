#include <raylib.h>
#include "common.h"


void StartWindow()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(DefaultWidth, DefaultHeight, "SPC");

    SetTargetFPS(60);

}
