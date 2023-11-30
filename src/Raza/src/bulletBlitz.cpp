#include "../lib/bulletBlitz.h"

void initializeBulletBlitz ( BulletBlitz &bullet, float startX, float startY,
                             float velocityX, float velocityY )
{
    bullet.texture.loadFromFile ( "assets/images/bullet.jpeg" );
    bullet.sprite.setTexture ( bullet.texture );
    bullet.sprite.setPosition ( startX, startY );
    bullet.sprite.setScale ( 0.01f, 0.01f );
    bullet.sprite.setColor ( sf::Color ( 0xFFFFFFFF ) );
    bullet.velocity = sf::Vector2f ( velocityX, velocityY );
}

void updateBulletBlitz ( BulletBlitz &bullet )
{
    bullet.sprite.move ( bullet.velocity );
}

void renderBulletBlitz ( sf::RenderWindow &window, const BulletBlitz &bullet )
{
    window.draw ( bullet.sprite );
}
