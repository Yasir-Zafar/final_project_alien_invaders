#include "bulletFunctions.h"
#include "enemiesFunctions.h"
#include "enemyBulletFunctions.h"
#include "gameFunctions.h"
#include "playerFunctions.h"
#include "renderGame.h"
#include <SFML/Graphics.hpp>

void runGame ( sf::RenderWindow &window, int &currentLevel, Player &player,
               Bullet bullets [ MAX_BULLETS ], int &bulletCount,
               Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
               int &enemiesCount, sf::Clock &clock,
               EnemyBullet enemyBullets [ MAX_ENEMY_BULLETS ],
               int &enemyBulletCount );
