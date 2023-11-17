#include "../lib/invader.h"

void initInvader ( Invader &invader, float speed, float x, float y )
{
    invader.shape.setSize ( sf::Vector2f ( 10, 10 ) );
    invader.shape.setFillColor ( sf::Color{ 0x964B00FF } );
    invader.shape.setPosition ( x, y );
    invader.speed = speed;
}
void moveInvader ( Invader &invader, float deltaTime )
{
    // Move the invader horizontally
    invader.shape.move ( invader.speed * deltaTime, 0 );
}

void updateInvader ( Invader &invader, float deltaTime, Bullet &invaderBullet )
{
    moveInvader ( invader, deltaTime );

    // Periodically shoot bullets
    invader.shootTimer += deltaTime;
    if ( invader.shootTimer >= invader.shootCooldown )
    {
        // Reset the shoot timer
        invader.shootTimer = 0.0f;

        // Shoot a bullet from the invader's position
        invaderBullet.shape.setPosition (
            invader.shape.getPosition ().x + invader.shape.getSize ().x / 2 -
                invaderBullet.shape.getSize ().x / 2,
            invader.shape.getPosition ().y + invader.shape.getSize ().y );
    }
}
