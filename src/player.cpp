#include "../lib/player.h"

void Player::initialize ()
{
    shape.setSize ( sf::Vector2f ( 40, 40 ) );
    shape.setFillColor ( sf::Color::Green );
    shape.setPosition ( 375, 500 );
}

void Player::move ( float offsetX, float offsetY, float deltaTime )
{
    // Adjust the movement based on delta time
    float speed = 400.0f;
    shape.move ( offsetX * speed * deltaTime, offsetY * speed * deltaTime );
}
