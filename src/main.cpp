#include "../lib/bullet.h"
#include "../lib/enemy.h"
#include "../lib/gameFunctions.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

int main ()
{
    sf::RenderWindow window ( sf::VideoMode ( 800, 600 ), "SFML Window" );

    Player player;
    player.initialize ();

    Bullet bullets [ MAX_BULLETS ];
    int bulletCount = 0;

    Enemy enemy [ MAX_ENEMY ];
    int enemyCount = 1;
    enemy [ 0 ].initialize ( sf::Vector2f ( 400, 200 ) );

    sf::Clock clock; // Declare the clock instance

    while ( window.isOpen () )
    {
        processGame ( window, player, bullets, bulletCount, enemy, enemyCount,
                      clock );
        renderGame ( window, player, bullets, bulletCount, enemy, enemyCount );
    }

    return 0;
}
