#include "../lib/invader.h"

void initInvader ( Invader &invader, float speed, float x, float y )
{
    invader.shape.setSize ( sf::Vector2f ( 10, 10 ) );
    invader.shape.setFillColor ( sf::Color{ 0x964B00FF } );
    invader.shape.setPosition ( x, y );
    invader.speed = speed;
}
