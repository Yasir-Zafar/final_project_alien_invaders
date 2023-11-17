#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/playerFunctions.h"

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   sf::Clock &clock )
{
    processEvents ( window, player, bullets, bulletCount, clock );
    updateGame ( bullets, bulletCount, clock.restart ().asSeconds () );
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
                  float deltaTime )
{
    updateBullets ( bullets, bulletCount, deltaTime );
}

void renderGame ( sf::RenderWindow &window, const Player &player,
                  const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    window.clear ();
    drawPlayer ( window, player );
    drawBullets ( window, bullets, bulletCount );
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
