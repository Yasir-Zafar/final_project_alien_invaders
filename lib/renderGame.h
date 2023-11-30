#pragma once

#include "bullet.h"
#include "constants.h" // Include the Constants header
#include "enemies.h"
#include "enemyBullet.h"
#include "player.h"
#include <SFML/Graphics.hpp>

void drawPlayer ( sf::RenderWindow &window, const Player &player );
void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount );
void drawEnemies (
    sf::RenderWindow &window,
    const Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ] );

void drawEnemyBullets ( sf::RenderWindow &window,
                        const EnemyBullet enemyBullets [ MAX_ENEMY_BULLETS ],
                        int enemyBulletCount );
void renderGameOver ( sf::RenderWindow &window );
void renderScore ( sf::RenderWindow &window, const Player &player,
                   sf::Text text );
void renderGame ( sf::RenderWindow &window, const Player &player,
                  Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                  EnemyBullet enemyBullets [ MAX_ENEMY_BULLETS ],
                  int enemyBulletCount );
