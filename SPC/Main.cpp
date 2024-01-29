#include "common.h"
#include "Menu.h"


Menu init()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(DefaulWidth, DefaultHeight, "SPC");

    SetTargetFPS(60);
    Menu menu;
    return menu;

}

void loop(Menu menu)
{
    while (!WindowShouldClose())
    {
        // Update

        // Draw
        BeginDrawing();
        
        menu.Render();

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
    Menu menu = init();

    //Menu& menuRef = menu;

    loop(menu);


    close();

    return 0;
}

