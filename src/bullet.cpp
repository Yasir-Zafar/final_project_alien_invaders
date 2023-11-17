#include "../lib/bullet.h"

void initBullet ( Bullet &bullet, float speed, float x, float y )
{
    bullet.shape.setSize ( sf::Vector2f ( 50, 20 ) );
    bullet.shape.setFillColor ( sf::Color ::Green );
    bullet.shape.setPosition ( x, y );
    bullet.speed = speed;
}
