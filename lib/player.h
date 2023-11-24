#pragma once

#include <SFML/Graphics.hpp>

// Player structure
struct Player
{
    sf::Sprite sprite;
    sf::Texture texture;
    int lives;
    bool gameOver;
    int score;
    float bulletCooldown = 0.5f; // Set the cooldown time in seconds
    float timeSinceLastShot = 0.0f;

    void initialize ();
    void move ( float offsetX, float offsetY, float deltaTime );
};
