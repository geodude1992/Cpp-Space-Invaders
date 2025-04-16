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

void Spaceship::Draw()
{
    DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft()
{
    position.x -= 7;
    // Set left window boundary
    if(position.x < 0){
        position.x = 0;
    }
}

void Spaceship::MoveRight()
{
    position.x += 7;
    // Set right window boundary
    if(position.x > GetScreenWidth() - image.width){
        position.x = GetScreenWidth() - image.width;
    }
}