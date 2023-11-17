#include "../lib/bullet.h"

void initBullet ( Bullet &bullet, float speed, float x, float y )
{
    bullet.shape.setSize ( sf::Vector2f ( 5, 5 ) );
    bullet.shape.setFillColor ( sf::Color ::Green );
    bullet.shape.setPosition ( x, y );
    bullet.speed = speed;
}

void moveBullet ( Bullet &bullet, float deltaTime )
{
    // Move the bullet vertically
    bullet.shape.move ( 0, -bullet.speed * deltaTime );
}
