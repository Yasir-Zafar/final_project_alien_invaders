#pragma once

#include <SFML/Graphics.hpp>

// Player structure
struct Player
{
    sf::Sprite sprite;
    sf::Texture texture;
    int lives;

    void initialize ();
    void move ( float offsetX, float offsetY, float deltaTime );
};
