#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

struct Bullet
{
    sf::RectangleShape shape;
    float speed{}, x{}, y{};
};

void initBullet ( Bullet &bullet, float speed, float x, float y );

#endif
