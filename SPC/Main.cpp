#include "common.h"


void init()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(DefaulWidth, DefaultHeight, "SPC");

    SetTargetFPS(60);
}

void loop()
{
    while (!WindowShouldClose())
    {
        // Update

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }
}

void close()
{
    CloseWindow();
}

int main(void)
{
    init();

    loop();

    close();

    return 0;
}

