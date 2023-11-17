#include "../lib/player.h"

void initPlayer ( Player &player, float speed )
{
    player.shape.setSize ( sf::Vector2f ( 10, 10 ) );
    player.shape.setFillColor ( sf::Color ::White );
    player.shape.setPosition ( 400, 500 );
    player.speed = speed;
}
