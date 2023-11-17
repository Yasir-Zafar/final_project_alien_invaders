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

void render ( sf::RenderWindow &window, const Player &player,
              const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    window.clear ();

    // Draw the player
    window.draw ( player.shape );

    // Draw bullets
    for ( int i = 0; i < bulletCount; ++i )
        window.draw ( bullets [ i ].shape );

    window.display ();
}
