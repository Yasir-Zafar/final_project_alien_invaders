#ifndef PLAYER_FUNCTIONS_H
#define PLAYER_FUNCTIONS_H

#include "../lib/bullet.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

void handlePlayerMovement ( Player &player, sf::Clock &clock );
void handleBulletShooting ( Player &player, Bullet bullets [],
                            int &bulletCount );

#endif // PLAYER_FUNCTIONS_H
