#pragma once
#include <raylib.h>
#include "laser.hpp"
#include <vector>

class Spaceship{
    public:
        // Constructor and destructor
        Spaceship();
        ~Spaceship();
        void Draw();
        void MoveLeft();
        void MoveRight();
        void FireLaser();
        std::vector<Laser> lasers;
    private:
        Texture2D image;
        Vector2 position;   // Raylib vector of 2 components x, y
        double lastFireTime; // Set fire rate for standard beam
};