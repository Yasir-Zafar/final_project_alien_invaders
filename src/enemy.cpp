#include "../lib/enemies.h"

void Enemies::initialize ( sf::Vector2f position )
{
    shape.setSize ( sf::Vector2f ( 20, 20 ) );
    shape.setFillColor ( sf::Color::Magenta );
    shape.setPosition ( position );
    isActive = true;
}

void Enemies::move ( float offsetX, float offsetY )
{
    shape.move ( offsetX, offsetY );
}
