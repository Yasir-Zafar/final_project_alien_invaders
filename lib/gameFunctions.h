#pragma once

#include "../lib/bullet.h"
#include "../lib/enemy.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

const int MAX_BULLETS = 10;
const int MAX_ENEMY = 5;

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemy enemy [ MAX_ENEMY ], int &enemyCount,
                   sf::Clock &clock );
void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock );
void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemy enemy [ MAX_ENEMY ], int &enemyCount, float deltaTime );
void renderGame ( sf::RenderWindow &window, const Player &player,
                  const Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  const Enemy enemy [ MAX_ENEMY ], int enemyCount );
void drawPlayer ( sf::RenderWindow &window, const Player &player );
void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount );
void drawEnemy ( sf::RenderWindow &window, const Enemy enemy [ MAX_ENEMY ],
                 int enemyCount );
