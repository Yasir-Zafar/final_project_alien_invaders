// gameFunctions.cpp
#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/enemyFunctions.h"
#include "../lib/playerFunctions.h"
#include <iostream>

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemy enemy [ MAX_ENEMY ], int &enemyCount,
                   sf::Clock &clock )
{
    processEvents ( window, player, bullets, bulletCount, clock );
    updateGame ( bullets, bulletCount, enemy, enemyCount,
                 clock.restart ().asSeconds (), player, window );
    renderGame ( window, player, bullets, bulletCount, enemy, enemyCount );
}

void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock )
{
    sf::Event event;
    while ( window.pollEvent ( event ) )
        if ( event.type == sf::Event::Closed )
            window.close ();

    // Handle player input
    handlePlayerMovement ( player, clock );

    // Shoot bullets with left mouse click
    handleBulletShooting ( player, bullets, bulletCount );
}
void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemy enemy [ MAX_ENEMY ], int &enemyCount, float deltaTime,
                  Player &player, sf::RenderWindow &window )
{
    updateBullets ( bullets, bulletCount, deltaTime );
    updateEnemy ( enemy, enemyCount, deltaTime );
    handlePlayerEnemyCollisions ( player, enemy, enemyCount, window );
}

void renderGame ( sf::RenderWindow &window, const Player &player,
                  const Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  const Enemy enemy [ MAX_ENEMY ], int enemyCount )
{
    window.clear ();
    drawPlayer ( window, player );
    drawBullets ( window, bullets, bulletCount );
    drawEnemy ( window, enemy, enemyCount );
    window.display ();
}

void drawPlayer ( sf::RenderWindow &window, const Player &player )
{
    window.draw ( player.shape );
}

void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    for ( int i = 0; i < bulletCount; ++i )
    {
        window.draw ( bullets [ i ].shape );
    }
}

void drawEnemy ( sf::RenderWindow &window, const Enemy enemy [ MAX_ENEMY ],
                 int enemyCount )
{
    for ( int i = 0; i < enemyCount; ++i )
    {
        window.draw ( enemy [ i ].shape );
    }
}

void cleanupGame ( sf::RenderWindow &window ) { window.close (); }

void handlePlayerEnemyCollisions ( Player &player, Enemy enemies [],
                                   int enemyCount, sf::RenderWindow &window )
{
    for ( int i = 0; i < enemyCount; ++i )
    {
        if ( player.shape.getGlobalBounds ().intersects (
                 enemies [ i ].shape.getGlobalBounds () ) )
        {
            // Deduct a life when the player collides with an enemy
            player.lives--;

            // Reset player position or perform other actions as needed

            // Optional: End the game if lives reach zero
            if ( player.lives <= 0 )
            {
                // game over logic here
                std::cout << "Game Over!\n";
                window.close ();
            }
        }
    }
}
