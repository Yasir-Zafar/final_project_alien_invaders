#ifndef INVADER_H
#define INVADER_H

#include "../lib/bullet.h"
#include <SFML/Graphics.hpp>

struct Invader
{
    sf::RectangleShape shape;
    float speed{};
    float shootCooldown;
    float shootTimer;
};

void initInvader ( Invader &invader, float speed, float x, float y );
void moveInvader ( Invader &invader, float deltaTime );
void updateInvader ( Invader &invader, float deltaTime, Bullet &invaderBullet );

#endif
