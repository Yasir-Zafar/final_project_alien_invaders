#pragma once

#include <SFML/Graphics.hpp>

struct PlayerBlitz
{
    sf::Sprite sprite;
    float speed;
    sf::Texture texture;
    // Add any other player-related variables here
};

void initializePlayerBlitz ( PlayerBlitz &player, float startX, float startY,
                             float speed );
void updatePlayerBlitz ( PlayerBlitz &player );
void renderPlayerBlitz ( sf::RenderWindow &window, const PlayerBlitz &player );
