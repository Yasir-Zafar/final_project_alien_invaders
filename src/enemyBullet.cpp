#include "../lib/enemyBullet.h"

void EnemyBullet::initialize ( sf::Vector2f position )
{
    shape.setSize ( sf::Vector2f ( 5, 5 ) );
    shape.setFillColor ( sf::Color::Green );
    shape.setPosition ( position );
    velocity =
        sf::Vector2f ( 0, ENEMY_BULLET_SPEED ); // Adjust the speed as needed
    isActive = true;
}

void EnemyBullet::move ( float deltaTime )
{
    shape.move ( velocity * deltaTime );
}
