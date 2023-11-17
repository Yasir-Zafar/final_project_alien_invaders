// gameFunctions.cpp
#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/enemyFunctions.h"
#include "../lib/playerFunctions.h"

void processGame ( sf::RenderWindow &window, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemy enemy [ MAX_ENEMY ], int &enemyCount,
                   sf::Clock &clock )
{
    processEvents ( window, player, bullets, bulletCount, clock );
    updateGame ( bullets, bulletCount, enemy, enemyCount,
                 clock.restart ().asSeconds () );
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

    // Shoot bullets
    handleBulletShooting ( player, bullets, bulletCount );
}

void updateGame ( Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                  Enemy enemy [ MAX_ENEMY ], int &enemyCount, float deltaTime )
{
    updateBullets ( bullets, bulletCount, deltaTime );
    updateEnemy ( enemy, enemyCount, deltaTime );
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
