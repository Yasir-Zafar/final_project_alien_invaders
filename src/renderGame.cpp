#include "../lib/renderGame.h"

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
