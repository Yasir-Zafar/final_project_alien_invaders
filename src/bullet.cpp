#include "../lib/bullet.h"

void Bullet::initialize ( sf::Vector2f position )
{
    shape.setSize ( sf::Vector2f ( 5, 5 ) );
    shape.setFillColor ( sf::Color::Red );
    shape.setPosition ( position );
    velocity = sf::Vector2f ( 0, -10000 ); // Adjust the speed as needed
    isActive = true;
}

void Bullet::move ( float deltaTime ) { shape.move ( velocity * deltaTime ); }
