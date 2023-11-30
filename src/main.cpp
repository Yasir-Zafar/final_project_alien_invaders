#include "../lib/runGame.h"
#include "Raza/lib/game.h"

int main ()
{
    int mode = 1;
    if ( mode == 0 )
    {
        sf::RenderWindow window ( sf::VideoMode ( 800, 600 ), "SFML Window" );

        int currentLevel = 1;

        Player player;
        player.initialize ();

        Bullet bullets [ MAX_BULLETS ];
        int bulletCount = 1;

        Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ];
        int enemiesCount = 49;

        EnemyBullet enemyBullets [ MAX_ENEMY_BULLETS ];
        int enemyBulletCount = 0;

        sf::Clock clock; // Declare the clock instance

        runGame ( window, currentLevel, player, bullets, bulletCount, enemies,
                  enemiesCount, clock, enemyBullets, enemyBulletCount );
    }
    else if ( mode == 1 )
    {
        runBlitz ();
    }
    return 0;
}
