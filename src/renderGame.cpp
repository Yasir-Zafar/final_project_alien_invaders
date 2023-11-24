#include "../lib/renderGame.h"
#include <iostream>

void renderGame ( sf::RenderWindow &window, const Player &player,
                  Bullet bullets [ MAX_BULLETS ], int bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ] )
{
    window.clear ();

    sf::Font font;
    if ( !font.loadFromFile ( "assets/font/arial.ttf" ) )
        std::cout << "Failed to load font!" << std::endl;

    sf::Text scoreText;
    scoreText.setFont ( font );
    scoreText.setCharacterSize ( 20 );
    scoreText.setFillColor ( sf::Color::White );

    if ( !player.gameOver )
    {
        drawPlayer ( window, player );
        drawBullets ( window, bullets, bulletCount );
        drawEnemies ( window, enemies );
    }
    else
    {
        renderGameOver ( window );
    }

    renderScore ( window, player, scoreText );
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
        if ( bullets [ i ].isActive )
        { // Check if the bullet is active before drawing
            window.draw ( bullets [ i ].shape );
        }
    }
}

void drawEnemies (
    sf::RenderWindow &window,
    const Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ] )
{
    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            if ( enemies [ i ][ j ].isActive )
            {
                window.draw ( enemies [ i ][ j ].shape );
            }
        }
    }
}

void renderGameOver ( sf::RenderWindow &window )
{
    sf::Font font;
    if ( !font.loadFromFile ( "assets/font/arial.ttf" ) )
        std::cout << "Failed to load font!" << std::endl;

    sf::Text gameOverText;
    gameOverText.setFont ( font );
    gameOverText.setString ( "Game Over!" );
    gameOverText.setCharacterSize ( 20 );
    gameOverText.setFillColor ( sf::Color::Red );
    gameOverText.setPosition ( 340, 300 );

    window.draw ( gameOverText );
}

void renderScore ( sf::RenderWindow &window, const Player &player,
                   sf::Text text )
{
    text.setString ( "Score: " + std::to_string ( player.score ) );
    text.setPosition ( 10, 10 );

    window.draw ( text );
}
