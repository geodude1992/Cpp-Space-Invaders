#include "laser.hpp"
#include <iostream>

Laser::Laser(Vector2 position, int speed)
{
    this -> position = position;
    this -> speed = speed;
    active = true;
}

void Laser::Draw()
{   
    if(active){
        DrawRectangle(position.x, position.y, 4, 12, {134, 162, 61, 100});
        DrawCircle(position.x+2, position.y, 6, {255, 170, 70, 100});
    }
}

void Laser::Update()
{
    position.y += speed;
    // set lasers to inactive once they are out of screen window boundaries
    if(active){
        if(position.y > GetScreenHeight() || position.y < 0){
            active = false;
            std::cout << "Laser Inactive" << std::endl; // Test to make sure lasers are set inactive
        }
    }
}