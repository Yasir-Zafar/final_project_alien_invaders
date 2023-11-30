#pragma once

#include "constants.h"
#include "enemies.h"
#include "enemyBullet.h"

void updateEnemiesFormation (
    int &currentLevel, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount, float deltaTime, EnemyBullet enemyBullets [],
    int &enemyBulletCount );

void spawnEnemiesFormation (
    sf::RenderWindow &window,
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount );
