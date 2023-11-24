#include "../lib/bullet.h"
#include "../lib/enemies.h"
#include "../lib/gameFunctions.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

int main ()
{
    sf::RenderWindow window ( sf::VideoMode ( 800, 600 ), "SFML Window" );

    Player player;
    player.initialize ();

    Bullet bullets [ MAX_BULLETS ];
    int bulletCount = 1;

    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ];
    int enemiesCount = 49;

    sf::Clock clock; // Declare the clock instance

    spawnEnemiesFormation ( enemies, enemiesCount );

    while ( window.isOpen () )
    {
        processGame ( window, player, bullets, bulletCount, enemies,
                      enemiesCount, clock );
        if ( player.gameOver )
        {
            sf::sleep ( sf::seconds ( 3 ) );
            window.close ();
        }
    }
    cleanupGame ( window );

    return 0;
}
