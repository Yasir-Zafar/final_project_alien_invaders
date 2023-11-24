#pragma once

#include "../lib/bullet.h"
#include "../lib/enemies.h"
#include "../lib/player.h"
#include "../lib/renderGame.h"

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                   int &enemiesCount, sf::Clock &clock );
void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock );
void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                  float deltaTime, Player &player, int enemiesCount );

void cleanupGame ( sf::RenderWindow &window );
void handlePlayerEnemiesCollisions (
    Player &player, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int enemiesCount );
void spawnEnemiesFormation (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount );
void updateEnemiesFormation (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], int &enemiesCount,
    float deltaTime );
