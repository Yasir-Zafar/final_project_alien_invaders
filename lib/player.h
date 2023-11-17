#pragma once

#include <SFML/Graphics.hpp>

// Player structure
struct Player
{
    sf::RectangleShape shape;

    void initialize ();
    void move ( float offsetX, float offsetY, float deltaTime );
};
