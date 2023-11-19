#include "../lib/renderGame.h"
#include <iostream>

void renderGame ( sf::RenderWindow &window, const Player &player,
                  const Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  const Enemy enemy [ MAX_ENEMY ], int enemyCount )
{
    window.clear ();
    sf::Texture backgroundTexture;
    if ( !backgroundTexture.loadFromFile ( "assets/images/black.png" ) )
        std::cout << "Failed to load background image!" << std::endl;

    sf::Vector2u imageSize = window.getSize ();
    drawBackground ( window, backgroundTexture, (float)imageSize.x,
                     (float)imageSize.y );
    drawPlayer ( window, player );
    drawBullets ( window, bullets, bulletCount );
    drawEnemy ( window, enemy, enemyCount );
    window.display ();
}

void drawPlayer ( sf::RenderWindow &window, const Player &player )
{
    window.draw ( player.sprite );
}

void drawBullets ( sf::RenderWindow &window,
                   const Bullet bullets [ MAX_BULLETS ], int bulletCount )
{
    for ( int i = 0; i < bulletCount; ++i )
    {
        window.draw ( bullets [ i ].shape );
    }
}

void drawEnemy ( sf::RenderWindow &window, const Enemy enemy [ MAX_ENEMY ],
                 int enemyCount )
{
    for ( int i = 0; i < enemyCount; ++i )
    {
        window.draw ( enemy [ i ].shape );
    }
}

void drawBackground ( sf::RenderWindow &window,
                      const sf::Texture &backgroundTexture, float width,
                      float height )
{
    sf::Sprite backgroundSprite;
    backgroundSprite.setTexture ( backgroundTexture );
    backgroundSprite.setColor ( sf::Color ( 255, 255, 255, 128 ) );
    backgroundSprite.setScale ( width / (float)backgroundTexture.getSize ().x,
                                height /
                                    (float)backgroundTexture.getSize ().y );
    window.draw ( backgroundSprite );
}
