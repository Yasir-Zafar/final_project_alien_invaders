#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include "../lib/bullet.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

// Set a maximum number of bullets
const int MAX_BULLETS = 10;

// Function declarations
void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock );
void update ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
              float deltaTime );
void render ( sf::RenderWindow &window, const Player &player,
              const Bullet bullets [ MAX_BULLETS ], int bulletCount );

void drawPlayer ( sf::RenderWindow &window, const Player &player );
void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount );

#endif // GAME_FUNCTIONS_H
