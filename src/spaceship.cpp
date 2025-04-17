#include "spaceship.hpp"

Spaceship::Spaceship()
{
    image = LoadTexture("assets/space-invaders.png");
    position.x = (GetScreenWidth() - image.width)/ 2;  // Set ships x position to middle of screen
    position.y = GetScreenHeight() - image.height;
    lastFireTime = 0.0;
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

void Spaceship::FireLaser()
{
    // Firerate 1 shoot per 350ms
    if(GetTime() - lastFireTime >= 0.35){   
        lasers.push_back(Laser({position.x + image.width/2 - 2, position.y}, -6));  
        lastFireTime = GetTime();
    }
}