#include "raylib.h"

int main() {
  const int screenWidth = 800;
  const int screenHeight = 600;

  int move = 1;
  int playerPositionY = 10;
  int playerPositionX = 10;
  InitWindow(screenWidth, screenHeight, "Raylib basic window");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();

    //Player
    DrawCircle(playerPositionX, playerPositionY, 10, GREEN);

    //Move The Player
    if(IsKeyDown(KEY_LEFT_SHIFT))
      move = 3;
    else
      move = 1;

    if(IsKeyDown(KEY_S))
    {
      if(playerPositionY >= screenHeight - 10)
        playerPositionY = screenHeight - 11;
      playerPositionY += move;
    }
    if(IsKeyDown(KEY_D))
    {
      if(playerPositionX >= screenWidth - 10)
        playerPositionX = screenWidth - 11;
      playerPositionX += move;
    }
    if(IsKeyDown(KEY_W))
    {
      if(playerPositionY <= 10)
        playerPositionY = 11;
      playerPositionY -= move;
    }
    if(IsKeyDown(KEY_A))
    {
      if(playerPositionX <= 10)
        playerPositionX = 11;
      playerPositionX -= move;            
    }
    //End of Movment
    ClearBackground(BLACK);

    EndDrawing();
  }
  CloseWindow();
  return 0;
}