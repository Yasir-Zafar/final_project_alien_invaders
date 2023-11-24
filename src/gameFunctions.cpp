// gameFunctions.cpp
#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/enemiesFunctions.h"
#include "../lib/playerFunctions.h"
#include <iostream>

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                   int &enemiesCount, sf::Clock &clock )

{
    processEvents ( window, player, bullets, bulletCount, clock );
    updateGame ( bullets, bulletCount, enemies, clock.restart ().asSeconds (),
                 player, enemiesCount );
    renderGame ( window, player, bullets, bulletCount, enemies );
}

void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock )
{
    sf::Event event;
    while ( window.pollEvent ( event ) )
        if ( event.type == sf::Event::Closed )
            window.close ();

    handlePlayerMovement ( player, clock );

    handleBulletShooting ( player, bullets, bulletCount );
}

void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                  float deltaTime, Player &player, int enemiesCount )
{
    updateBullets ( bullets, bulletCount, deltaTime );
    updateEnemiesFormation (
        enemies, enemiesCount,
        deltaTime ); // Adjusted to use the 2D array of enemies
    handlePlayerEnemiesCollisions ( player, enemies,
                                    enemiesCount ); // Fixed function name
    handleBulletEnemiesCollisions ( bullets, bulletCount, enemies, player,
                                    enemiesCount );
}

void cleanupGame ( sf::RenderWindow &window ) { window.close (); }

void handlePlayerEnemiesCollisions (
    Player &player, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int enemiesCount )
{
    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            if ( player.sprite.getGlobalBounds ().intersects (
                     enemies [ i ][ j ].shape.getGlobalBounds () ) )
            {
                player.lives--;
                player.sprite.setPosition ( 370, 500 );
                if ( player.lives <= 0 )
                {
                    player.gameOver = true;
                }
                spawnEnemiesFormation ( enemies, enemiesCount );
            }
        }
    }
}

void spawnEnemiesFormation (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount )
{
    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            enemies [ i ][ j ].initialize ( sf::Vector2f (
                static_cast<float> ( 40 +
                                     static_cast<float> ( j ) *
                                         ( ENEMIES_WIDTH + ENEMIES_PADDING ) ),
                static_cast<float> (
                    40 + static_cast<float> ( i ) *
                             ( ENEMIES_HEIGHT + ENEMIES_PADDING ) ) ) );
            enemiesCount++;
        }
    }
}

void updateEnemiesFormation (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], int &enemiesCount,
    float deltaTime )
{
    static bool moveRight = true; // Static variable to remember the direction

    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            // Check if we have reached the actual count of enemies
            if ( i * MAX_ENEMIES_COLS + j >= enemiesCount )
                break;

            if ( moveRight )
            {
                enemies [ i ][ j ].move ( ENEMIES_SPEED * deltaTime, 0.0f );

                // Check if the enemy has hit the right wall
                if ( enemies [ i ][ j ].shape.getPosition ().x +
                         ENEMIES_WIDTH >=
                     800 )
                {
                    moveRight = false;
                    for ( int row = 0; row < MAX_ENEMIES_ROWS; ++row )
                    {
                        for ( int col = 0; col < MAX_ENEMIES_COLS; ++col )
                        {
                            // Move all enemies down one row
                            enemies [ row ][ col ].move ( 0.0f,
                                                          ENEMIES_HEIGHT );
                        }
                    }
                }
            }
            else
            {
                enemies [ i ][ j ].move ( -ENEMIES_SPEED * deltaTime, 0.0f );

                // Check if the enemy has hit the left wall
                if ( enemies [ i ][ j ].shape.getPosition ().x <= 0 )
                {
                    moveRight = true;
                    for ( int row = 0; row < MAX_ENEMIES_ROWS; ++row )
                    {
                        for ( int col = 0; col < MAX_ENEMIES_COLS; ++col )
                        {
                            // Move all enemies down one row
                            enemies [ row ][ col ].move ( 0.0f,
                                                          ENEMIES_HEIGHT );
                        }
                    }
                }
            }
        }
    }
}
