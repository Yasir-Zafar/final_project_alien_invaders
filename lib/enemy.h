#pragma once

#include <SFML/Graphics.hpp>

struct Enemy
{
    sf::RectangleShape shape;
    sf::Vector2f velocity;

    void initialize ( sf::Vector2f position );
    void move ( float deltaTime );
};