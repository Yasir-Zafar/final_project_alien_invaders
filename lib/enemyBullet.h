#pragma once

#include "constants.h"
#include <SFML/Graphics.hpp>

struct EnemyBullet
{
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    bool isActive;

    void initialize ( sf::Vector2f position );
    void move ( float deltaTime );
};
