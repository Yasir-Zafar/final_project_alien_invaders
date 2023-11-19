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

void cleanupGame ( sf::RenderWindow &window ) { window.close (); }

void handlePlayerEnemyCollisions ( Player &player, Enemy enemies [],
                                   int &enemyCount, sf::RenderWindow &window )
{
    for ( int i = 0; i < enemyCount; ++i )
    {
        if ( player.shape.getGlobalBounds ().intersects (
                 enemies [ i ].shape.getGlobalBounds () ) )
        {
            player.lives--;

            // Reset player position or perform other actions as needed
            // For example, reset the player's position
            player.shape.setPosition ( 375, 500 );

            if ( player.lives <= 0 )
            {
                std::cout << "Game Over!\n";
                window.close ();
            }

            // Reset the enemy when the player loses a life
            resetEnemy ( enemies [ i ] );
        }
    }
}

void resetEnemy ( Enemy &enemy )
{
    // Reset the enemy position or perform other actions as needed
    enemy.shape.setPosition ( 400, 200 );
}
