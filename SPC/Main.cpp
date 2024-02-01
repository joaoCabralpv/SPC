#include "common.h"
#include "Menu.h"
#include "Window.h"




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


int main(void)
{
    
    StartWindow();

    //Menu& menuRef = menu;
    Menu menu;
    loop(menu);

    CloseWindow();

    return 0;
}

