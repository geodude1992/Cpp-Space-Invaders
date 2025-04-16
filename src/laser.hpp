#pragma once
#include <raylib.h>

class Laser {
    public:
        Laser(Vector2 position, int speed);
        void Update();  // Update position of laser beam
        void Draw();
    private:
        Vector2 position;
        int speed;
};