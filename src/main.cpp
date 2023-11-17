#include "../lib/bullet.h"
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

    sf::Clock clock; // Declare the clock instance

    while ( window.isOpen () )
    {
        processEvents ( window, player, bullets, bulletCount, clock );
        update ( bullets, bulletCount, clock.restart ().asSeconds () );
        render ( window, player, bullets, bulletCount );
    }

    return 0;
}
