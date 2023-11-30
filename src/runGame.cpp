#include "../lib/runGame.h"

void runGame ( sf::RenderWindow &window, int &currentLevel, Player &player,
               Bullet bullets [ MAX_BULLETS ], int &bulletCount,
               Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
               int &enemiesCount, sf::Clock &clock,
               EnemyBullet enemyBullets [ MAX_ENEMY_BULLETS ],
               int &enemyBulletCount )
{
    spawnEnemiesFormation ( window, enemies, enemiesCount );
    while ( window.isOpen () )
    {
        processGame ( window, currentLevel, player, bullets, bulletCount,
                      enemies, enemiesCount, clock, enemyBullets,
                      enemyBulletCount );
        if ( player.gameOver )
        {
            sf::sleep ( sf::seconds ( 3 ) );
            window.close ();
        }
    }
    cleanupGame ( window );
}
