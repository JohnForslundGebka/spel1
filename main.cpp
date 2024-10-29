#include <iostream>
#include "raylib.h"

int main(void)
{
    const int screenWeidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWeidth, screenHeight, "raylib [core] example - basic window");

    Vector2 ballPosition = {-100.00f,-100.00f};
    Color ballColor = RED;
    Color colors[8] = {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, BROWN, DARKGRAY};
    int currentColor = 0;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        ballPosition = GetMousePosition();
        
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            ballColor = colors[currentColor%8];
            currentColor++;
        }

        //Draw screen

        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawCircleV(ballPosition, 50, ballColor);
            DrawText("move ball with mouse and click button to change colour", 190, 200, 20, LIGHTGRAY);
            

        EndDrawing();
    }

    CloseWindow();

    return 0;
}