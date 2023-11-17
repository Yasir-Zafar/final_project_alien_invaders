#ifndef INVADER_H
#define INVADER_H

#include <SFML/Graphics.hpp>

struct Invader
{
    sf::RectangleShape shape;
    float speed{}, x{}, y{};
};

void initInvader ( Invader &invader, float speed, float x, float y );

#endif
