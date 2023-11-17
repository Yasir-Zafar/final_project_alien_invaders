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
    Bullet playerBullet;
    Bullet invaderBullet;

    initPlayer ( player, 200.0f );
    initInvader ( invader, 100.0f, 400.0f, 100.0f );
    initBullet ( playerBullet, 300.0f, 0.0f, 0.0f );
    initBullet ( invaderBullet, 200.0f, 0.0f, 0.0f );

    sf::Clock clock;

    // Main game loop
    while ( window.isOpen () )
    {
        // Handle Events
        sf::Event event;
        while ( window.pollEvent ( event ) )
        {
            if ( event.type == sf::Event::Closed )
                window.close ();
            // Check for shoot input
            if ( event.type == sf::Event::KeyPressed )
                if ( event.key.code == sf::Keyboard::Space )
                    shootBullet ( player, playerBullet );
        }
        float deltaTime = clock.restart ().asSeconds ();

        // Update game logic here
        movePlayer ( player, deltaTime );
        updateInvader ( invader, deltaTime, invaderBullet );
        moveBullet ( playerBullet, deltaTime );
        moveBullet ( invaderBullet, deltaTime );

        // Clear the window
        window.clear ();

        // Draw game entities here
        window.draw ( player.shape );
        window.draw ( invader.shape );
        window.draw ( playerBullet.shape );
        window.draw ( invaderBullet.shape );

        // Display the contents of the window
        window.display ();
    }

    return 0;
}
