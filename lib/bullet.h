#pragma once

#include <SFML/Graphics.hpp>

struct Bullet
{
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    bool isActive; // New flag to indicate if the bullet is active

    void initialize ( sf::Vector2f position );
    void move ( float deltaTime );
};
