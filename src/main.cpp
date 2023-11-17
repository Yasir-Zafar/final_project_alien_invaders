#include "../lib/bullet.h"
#include "../lib/invader.h"
#include "../lib/player.h"
#include <SFML/Graphics.hpp>

int main ()
{
    // Create a window
    sf::RenderWindow window ( sf::VideoMode ( 800, 600 ), "Simple Game" );

    // Initialize player
    Player player;
    Invader invader;
    Invader invader1;
    Invader invader2;
    Invader invader3;
    Invader invader4;
    Bullet bullet;

    initPlayer ( player, 200.0f );
    initInvader ( invader, 100.0f, 400.0f, 400.0f );
    initInvader ( invader1, 100.0f, 500.0f, 400.0f );
    initInvader ( invader2, 100.0f, 300.0f, 400.0f );
    initInvader ( invader3, 100.0f, 300.0f, 450.0f );
    initInvader ( invader4, 100.0f, 500.0f, 450.0f );
    initBullet ( bullet, 300.0f, 0.0f, 0.0f );

    // Main game loop
    while ( window.isOpen () )
    {
        // Handle events
        sf::Event event;
        while ( window.pollEvent ( event ) )
        {
            if ( event.type == sf::Event::Closed )
                window.close ();
        }

        // Clear the window
        window.clear ();

        // Draw game entities here
        window.draw ( player.shape );
        window.draw ( invader.shape );
        window.draw ( invader1.shape );
        window.draw ( invader2.shape );
        window.draw ( invader3.shape );
        window.draw ( invader4.shape );
        window.draw ( bullet.shape );

        // Display the contents of the window
        window.display ();
    }

    return 0;
}
