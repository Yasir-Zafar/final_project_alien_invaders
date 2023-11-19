#include "../lib/enemy.h"

void Enemy::initialize ( sf::Vector2f position )
{
    shape.setSize ( sf::Vector2f ( 30, 30 ) );
    shape.setFillColor ( sf::Color::Magenta );
    shape.setPosition ( position );
    velocity = sf::Vector2f ( 0, 150 ); // Adjust the speed as needed
}

void Enemy::move ( float deltaTime ) { shape.move ( velocity * deltaTime ); }
