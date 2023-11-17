#ifndef PLAYER_H
#define PLAYER_H

#include "../lib/bullet.h"
#include <SFML/Graphics.hpp>

struct Player
{
    sf::RectangleShape shape;
    float speed;
};

void initPlayer ( Player &player, float speed );
void movePlayer ( Player &player, float deltaTime );
void shootBullet ( Player &player, Bullet &bullet );

#endif
