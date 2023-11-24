#pragma once

#include <SFML/Graphics.hpp>

struct Enemies
{
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    bool isActive; // New member variable

    void initialize ( sf::Vector2f position );
    void move ( float offsetX, float offsetY );
};
