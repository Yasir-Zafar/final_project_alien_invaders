#include "../lib/playerFunctions.h"
#include "../lib/constants.h"

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
            player.sprite.getPosition () +
            sf::Vector2f ( player.sprite.getGlobalBounds ().width / 2, 0 ) );
        bulletCount++;
    }
}

void handlePlayerEnemiesCollisions (
    Player &player, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int enemiesCount )
{
    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            // Check if we have reached the actual count of enemies
            if ( i * MAX_ENEMIES_COLS + j >= enemiesCount )
            {
                break;
            }

            if ( player.sprite.getGlobalBounds ().intersects (
                     enemies [ i ][ j ].sprite.getGlobalBounds () ) )
            {
                player.lives = 0;
                player.score = 0;
                player.sprite.setPosition ( 370, 500 );
                if ( player.lives <= 0 )
                {
                    player.gameOver = true;
                }
            }
        }
    }
}
