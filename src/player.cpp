#include "../lib/player.h"

void initPlayer ( Player &player, float speed )
{
    player.shape.setSize ( sf::Vector2f ( 10, 10 ) );
    player.shape.setFillColor ( sf::Color ::White );
    player.shape.setPosition ( 400, 500 );
    player.speed = speed;
}

void movePlayer ( Player &player, float deltaTime )
{
    // Move the player based on keyboard input
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Left ) &&
         player.shape.getPosition ().x > 0 )
    {
        player.shape.move ( -player.speed * deltaTime, 0 );
    }
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Right ) &&
         player.shape.getPosition ().x < 750 )
    {
        player.shape.move ( player.speed * deltaTime, 0 );
    }
}

void shootBullet ( Player &player, Bullet &bullet )
{
    // Shoot a bullet from the player's position
    bullet.shape.setPosition ( player.shape.getPosition ().x +
                                   player.shape.getSize ().x / 2 -
                                   bullet.shape.getSize ().x / 2,
                               player.shape.getPosition ().y );
}
