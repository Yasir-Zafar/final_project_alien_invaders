#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

struct Bullet
{
    sf::RectangleShape shape;
    sf::Vector2f velocity;

    void initialize ( sf::Vector2f position );
    void move ( float deltaTime );
};

#endif // BULLET_H
