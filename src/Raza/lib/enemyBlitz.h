#pragma once

#include <SFML/Graphics.hpp>

struct EnemyBlitz
{
    sf::Sprite sprite;
    sf::Texture texture;
    // Add any other enemy-related variables here
};

const int MAX_ENEMIES_BLITZ = 100;

void initializeEnemiesBlitz ( EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] );
void updateEnemiesBlitz ( EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] );
void renderEnemiesBlitz ( sf::RenderWindow &window,
                          EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] );
