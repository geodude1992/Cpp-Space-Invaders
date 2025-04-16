#pragma once    // ensures that the contents are included only once, even if the header file is included multiple times in different parts of your project.
#include "spaceship.hpp"

class Game {
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();

    private:
        Spaceship spaceship;
};