#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

const int size = 5;

void setupText ( sf::Font &font, sf::Text &sc, sf::Text &sco, sf::Text &lvl,
                 sf::Text &life, sf::Text &lv, sf::Text &levl );
void setupSounds ( sf::SoundBuffer &buffer, sf::Sound &gun );
bool collision ( const sf::Sprite &sprite, const sf::Sprite &otherSprite );
void setupPlayer ( sf::Sprite &player, sf::Texture &playerTexture );
void setupBullet ( sf::Sprite &bullet, sf::Texture &bulletTexture );
void setupEnemies ( sf::Sprite enemies [ size ], sf::Texture &enemyTexture );
void setupBackground ( sf::Sprite &background, sf::Texture &back );
void handleCollision ( sf::Sprite &player, sf::Sprite enemies [ size ],
                       sf::Sprite &bullet, sf::Text &lv, sf::Text &sc,
                       sf::RenderWindow &window );
void moveEnemies ( sf::Sprite enemies [ size ] );

void runBlitz ();
