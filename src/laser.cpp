#include "laser.hpp"

Laser::Laser(Vector2 position, int speed)
{
    this -> position = position;
    this -> speed = speed;
}

void Laser::Draw()
{
    DrawRectangle(position.x, position.y, 4, 15, {134, 162, 61, 42});
}