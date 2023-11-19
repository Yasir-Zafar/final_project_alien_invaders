#include "../lib/player.h"
#include <iostream>

void Player::initialize ()
{
    if ( !texture.loadFromFile ( "assets/images/alien.png" ) )
        std::cout << "Failed to load player image!" << std::endl;

    sprite.setTexture ( texture );
    sprite.setPosition ( 375, 500 );
    sprite.scale ( 0.1f, 0.05f );
    sprite.setColor ( sf::Color ( 0xFFFFFFFF ) );
    lives = 3;
}

void Player::move ( float offsetX, float offsetY, float deltaTime )
{
    // Adjust the movement based on delta time
    float speed = 400.0f;
    sprite.move ( offsetX * speed * deltaTime, offsetY * speed * deltaTime );
}
