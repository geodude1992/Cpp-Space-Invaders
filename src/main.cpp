#include <raylib.h>
#include "game.hpp"

int main() 
{
    // Create game window
    int windowWidth = 800;
    int windowHeight = 600;

    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    // Lock framerate
    SetTargetFPS(60);
    // R,G,B,Alpha(transparency)
    Color grey = {29, 29, 27, 255};

    // Instantiate game
    Game game;

    // Game Loop
    // 1. Event Handling
    // 2. Updating Positions
    // 3. Drawing Objects
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();

        EndDrawing();
    }

    CloseWindow();
}