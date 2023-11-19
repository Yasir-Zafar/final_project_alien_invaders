#pragma once

#include "../lib/bullet.h"
#include "../lib/enemy.h"
#include "../lib/player.h"
#include "../lib/renderGame.h"

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemy enemy [ MAX_ENEMY ], int &enemyCount,
                   sf::Clock &clock );
void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock );
void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemy enemy [ MAX_ENEMY ], int &enemyCount, float deltaTime,
                  Player &player, sf::RenderWindow &window );
void cleanupGame ( sf::RenderWindow &window );
void handlePlayerEnemyCollisions ( Player &player, Enemy enemies [],
                                   int &enemyCount, sf::RenderWindow &window );
void resetEnemy ( Enemy &enemy );
