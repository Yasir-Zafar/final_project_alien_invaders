#include "../lib/player.h"
#include <iostream>

void Player::initialize ()
{
    if ( !texture.loadFromFile ( "assets/images/alien.png" ) )
        std::cout << "Failed to load player image!" << std::endl;

    sprite.setTexture ( texture );
    sprite.setPosition ( 370, 500 );
    sprite.scale ( 0.03f, 0.03f );
    sprite.setColor ( sf::Color ( 0xFFFFFFFF ) );
    lives = 3;
    gameOver = false;
    score = 0;
}

void Player::move ( float offsetX, float offsetY, float deltaTime )
{
    if ( !gameOver ) // Only move if the game is not over
    {
        float speed = 400.0f;
        sf::Vector2f newPosition = sprite.getPosition () +
                                   sf::Vector2f ( offsetX * speed * deltaTime,
                                                  offsetY * speed * deltaTime );
        if ( newPosition.x >= 0 &&
             newPosition.x + sprite.getGlobalBounds ().width <= 800 &&
             newPosition.y >= 0 &&
             newPosition.y + sprite.getGlobalBounds ().height <= 600 )
            sprite.move ( offsetX * speed * deltaTime,
                          offsetY * speed * deltaTime );
    }
}
