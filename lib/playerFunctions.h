#pragma once

#include "bullet.h"
#include "constants.h"
#include "enemies.h"
#include "player.h"
#include <SFML/Graphics.hpp>

void handlePlayerMovement ( Player &player, sf::Clock &clock );
void handleBulletShooting ( Player &player, Bullet bullets [],
                            int &bulletCount );
void handlePlayerEnemiesCollisions (
    Player &player, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int enemiesCount );
