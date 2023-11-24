#pragma once

#include "../lib/bullet.h"
#include "../lib/player.h"
#include "../lib/renderGame.h"
#include <SFML/Graphics.hpp>

void handlePlayerMovement ( Player &player, sf::Clock &clock );
void handleBulletShooting ( Player &player, Bullet bullets [],
                            int &bulletCount );
void shootBullet ( Player &player, Bullet bullets [], int &bulletCount );
