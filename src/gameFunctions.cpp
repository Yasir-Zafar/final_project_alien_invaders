#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/playerFunctions.h"

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

    // Shoot bullets
    handleBulletShooting ( player, bullets, bulletCount );
}

void update ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
              float deltaTime )
{
    updateBullets ( bullets, bulletCount, deltaTime );
}

void drawPlayer ( sf::RenderWindow &window, const Player &player )
{
    window.draw ( player.shape );
}

void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    // Use a range-based for loop to iterate through bullets
    for ( const auto &bullet : bullets )
    {
        // Draw the bullet only if it is within the valid range
        if ( isValidBullet ( bullet ) )
        {
            window.draw ( bullet.shape );
        }
    }
}

void render ( sf::RenderWindow &window, const Player &player,
              const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    window.clear ();

    // Draw player using the drawPlayer function
    drawPlayer ( window, player );

    // Draw bullets using the drawBullets function
    drawBullets ( window, bullets, bulletCount );

    window.display ();
}
