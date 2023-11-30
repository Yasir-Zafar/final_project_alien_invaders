#pragma once

#include "bullet.h"
#include "constants.h"
#include "enemies.h"
#include "enemyBullet.h"
#include "player.h"

void processGame ( sf::RenderWindow &window, int &currentLevel, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                   int &enemiesCount, sf::Clock &clock,
                   EnemyBullet enemyBullets [], int &enemyBulletCount );

void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock );
void updateGame ( int &currentLevel, Bullet bullets [ MAX_BULLETS ],
                  int &bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                  float deltaTime, Player &player, int enemiesCount,
                  EnemyBullet enemyBullets [], int &enemyBulletCount );

void cleanupGame ( sf::RenderWindow &window );
