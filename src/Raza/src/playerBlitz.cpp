#include "../lib/playerBlitz.h"

void initializePlayerBlitz ( PlayerBlitz &player, float startX, float startY,
                             float speed )
{
    player.texture.loadFromFile ( "assets/images/alien.png" );
    player.sprite.setTexture ( player.texture );
    player.sprite.setScale ( 0.01f, 0.01f );
    player.sprite.setColor ( sf::Color ( 0xFFFFFFFF ) );
    player.sprite.setPosition ( startX, startY );
    player.speed = speed;
}

void updatePlayerBlitz ( PlayerBlitz &player )
{
    // Add player logic here, e.g., handling input for movement
    // For simplicity, let's move left and right based on arrow keys
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Left ) )
    {
        player.sprite.move ( -player.speed, 0.0f );
    }
    if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Right ) )
    {
        player.sprite.move ( player.speed, 0.0f );
    }
}

void renderPlayerBlitz ( sf::RenderWindow &window, const PlayerBlitz &player )
{
    // Add player drawing code here
    window.draw ( player.sprite );
}
