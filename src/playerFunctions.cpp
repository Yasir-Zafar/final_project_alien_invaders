#include "../lib/playerFunctions.h"
#include "../lib/gameFunctions.h"

void handlePlayerMovement ( Player &player, sf::Clock &clock )
{
    float deltaTime = clock.restart ().asSeconds ();
    // Handle player movement
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Left ) )
        player.move ( -1.0f, 0.0f, deltaTime );
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Right ) )
        player.move ( 1.0f, 0.0f, deltaTime );
}

void handleBulletShooting ( Player &player, Bullet bullets [],
                            int &bulletCount )
{
    // Shoot bullets on space key press
    if ( sf::Mouse::isButtonPressed ( sf::Mouse::Left ) &&
         bulletCount < MAX_BULLETS )
    {
        bullets [ bulletCount ].initialize (
            player.shape.getPosition () +
            sf::Vector2f ( player.shape.getSize ().x / 2, 0 ) );
        bulletCount++;
    }
}
