#pragma once
#include <raylib.h>

class Spaceship{
    public:
        // Constructor and destructor
        Spaceship();
        ~Spaceship();
        void Draw();
        void MoveLeft();
        void MoveRight();
        void FireLaser();
    private:
        Texture2D image;
        Vector2 position;   // Raylib vector of 2 components x, y
};