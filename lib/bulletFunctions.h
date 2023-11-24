#pragma once

#include "../lib/bullet.h"
#include "../lib/enemies.h"
#include "../lib/player.h"
#include "../lib/renderGame.h"
#include <SFML/Graphics.hpp>

void updateBullets ( Bullet bullets [], int &bulletCount, float deltaTime );
void handleBulletEnemiesCollisions (
    Bullet bullets [ MAX_BULLETS ], int &bulletCount,
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], Player &player,
    int &enemiesCount );
