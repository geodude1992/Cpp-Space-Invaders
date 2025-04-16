#include "spaceship.hpp"

Spaceship::Spaceship()
{
    image = LoadTexture("assets/space-invaders.png");
    position.x = (GetScreenWidth() - image.width)/ 2;  // Set ships x position to middle of screen
    position.y = GetScreenHeight() - image.height;
}

Spaceship::~Spaceship()
{
    UnloadTexture(image);
}

void Spaceship::Draw(){
    DrawTextureV(image, position, WHITE);
}