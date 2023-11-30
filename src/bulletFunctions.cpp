#include "../lib/bulletFunctions.h"

void handleBulletEnemiesCollisions (
    Bullet bullets [ MAX_BULLETS ], int &bulletCount,
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], Player &player,
    int &enemiesCount )
{
    static const sf::Time collisionCooldown =
        sf::milliseconds ( 200 ); // Adjust as needed
    static sf::Clock collisionClock;

    for ( int i = 0; i < bulletCount; ++i )
    {
        for ( int row = 0; row < MAX_ENEMIES_ROWS; ++row )
        {
            for ( int col = 0; col < MAX_ENEMIES_COLS; ++col )
            {
                // Check if we have reached the actual count of enemies
                if ( row * MAX_ENEMIES_COLS + col >= enemiesCount )
                    break;
                if ( bullets [ i ].isActive && enemies [ row ][ col ].isActive )
                {
                    if ( bullets [ i ].shape.getGlobalBounds ().intersects (
                             enemies [ row ][ col ]
                                 .sprite.getGlobalBounds () ) )
                    {
                        if ( collisionClock.getElapsedTime () >
                             collisionCooldown )
                        {

                            enemies [ row ][ col ].isActive = false;
                            bullets [ i ] = bullets [ bulletCount - 1 ];
                            bulletCount--;
                            bullets [ i ].isActive = false;

                            // Increase the player's score
                            player.score += 10;

                            // Reset the cooldown timer
                            collisionClock.restart ();

                            // Decrement counters to recheck the current
                            // position
                            i--;
                            break;
                        }
                    }
                }
            }
        }
    }
}
// Add this function to the bottom of updateBullets:
void updateBullets ( Bullet bullets [], int &bulletCount, float deltaTime )
{
    // Update bullets
    for ( int i = 0; i < bulletCount; ++i )
    {
        if ( bullets [ i ].isActive )
        { // Check if the bullet is active before updating
            bullets [ i ].shape.move ( bullets [ i ].velocity * deltaTime );
        }
    }
    // Remove bullets that are out of bounds
    for ( int i = 0; i < bulletCount; ++i )
        if ( bullets [ i ].shape.getPosition ().y < 0 )
        {
            bullets [ i ] = bullets [ bulletCount - 1 ];
            bulletCount--;
            i--;
        }
}
