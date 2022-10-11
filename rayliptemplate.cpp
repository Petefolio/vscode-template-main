#include "raylib.h"
int main(){
InitWindow(500, 500, "Example Window");
SetTargetFPS(60);
    while(WindowShouldClose() == false){
    BeginDrawing();
    ClearBackground(WHITE);
    DrawCircle(250, 250, 50, BLUE);
    DrawRectangle(250, 250, 50, 100, RED);
CloseWindow();
}
}