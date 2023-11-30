#pragma once

#include "constants.h"
#include "enemies.h"
#include "enemyBullet.h"
#include "player.h"
#include <SFML/Graphics.hpp>

void updateEnemyBullets ( EnemyBullet enemyBullets [], int &enemyBulletCount,
                          float deltaTime, int currentLevel );
void handlePlayerCollisionsWithEnemyBullets ( Player &player,
                                              EnemyBullet enemyBullets [],
                                              int &enemyBulletCount );
void shootEnemyBullet ( EnemyBullet enemyBullets [], int &enemyBulletCount,
                        sf::Vector2f enemyPosition );
bool isEnemyInFront ( Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                      int row, int col );
void tryEnemyShooting (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], int row, int col,
    EnemyBullet enemyBullets [], int &enemyBulletCount );
bool isAnyEnemyBulletActive ( const EnemyBullet enemyBullets [],
                              int enemyBulletCount );
