#pragma once

#include <SFML/Graphics.hpp>

struct BulletBlitz
{
    sf::Sprite sprite;
    sf::Vector2f velocity;
    sf::Texture texture;
};

const int MAX_BULLETS_BLITZ = 1;

void initializeBulletBlitz ( BulletBlitz &bulletBlitz, float startX,
                             float startY, float velocityX, float velocityY );
void updateBulletBlitz ( BulletBlitz &bulletBlitz );
void renderBulletBlitz ( sf::RenderWindow &window,
                         const BulletBlitz &bulletBlitz );
