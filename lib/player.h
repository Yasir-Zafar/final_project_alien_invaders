#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

struct Player
{
    sf::RectangleShape shape;
    float speed;
};

void initPlayer ( Player &player, float speed );

#endif
