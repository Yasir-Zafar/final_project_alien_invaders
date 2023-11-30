#include "../lib/enemies.h"
#include <iostream>

void Enemies::initialize ( sf::Vector2f position )
{
    if ( !texture.loadFromFile ( "assets/images/alien.png" ) )
        std::cout << "Failed to load player image!" << std::endl;

    sprite.setTexture ( texture );
    sprite.scale ( 0.02f, 0.02f );
    sprite.setColor ( sf::Color ( 0xFFFFFFFF ) );
    sprite.setPosition ( position );
    isActive = true;
}

void Enemies::move ( float offsetX, float offsetY )
{
    sprite.move ( offsetX, offsetY );
}
