#pragma once

#include "../lib/bullet.h"
#include "../lib/enemies.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

const int MAX_BULLETS = 2;
const int MAX_ENEMIES = 50;
const int MAX_ENEMIES_ROWS = 5;  // Maximum number of rows of enemies
const int MAX_ENEMIES_COLS = 10; // Maximum number of columns of enemies
const float ENEMIES_WIDTH = 50.0f;
const float ENEMIES_HEIGHT = 50.0f;
const float ENEMIES_PADDING = 9.0f;
const float ENEMIES_SPEED = 100.0f;

void renderGame ( sf::RenderWindow &window, const Player &player,
                  Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ] );
void drawPlayer ( sf::RenderWindow &window, const Player &player );
void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount );
void drawEnemies (
    sf::RenderWindow &window,
    const Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ] );
void renderGameOver ( sf::RenderWindow &window );
void renderScore ( sf::RenderWindow &window, const Player &player,
                   sf::Text text );
