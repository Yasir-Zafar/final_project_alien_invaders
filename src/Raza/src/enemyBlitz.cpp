#include "../lib/enemyBlitz.h"
#include <cstdlib>

void initializeEnemiesBlitz ( EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] )
{
    for ( int i = 0; i < MAX_ENEMIES_BLITZ; ++i )
    {
        enemies [ i ].texture.loadFromFile ( "assets/images/alien.png" );
        enemies [ i ].sprite.setScale ( 0.01f, 0.01f );
        enemies [ i ].sprite.setTexture ( enemies [ i ].texture );
    }
}

void updateEnemiesBlitz ( EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] )
{
    // Add enemy logic here, e.g., simple vertical movement
    for ( int j = 0; j < MAX_ENEMIES_BLITZ; ++j )
    {
        for ( int k = 0; k < 8; ++k )
        {
            enemies [ k ].sprite.move ( 0.0f, 0.005f );

            // Reset position if the enemy goes off the screen
            if ( enemies [ k ].sprite.getPosition ().y > 600.0f )
            {
                float randomX = static_cast<float> ( rand () % 800 );
                enemies [ k ].sprite.setPosition ( randomX, -50.0f );
            }
        }
    }
}

void renderEnemiesBlitz ( sf::RenderWindow &window,
                          EnemyBlitz enemies [ MAX_ENEMIES_BLITZ ] )
{
    // Add enemy drawing code here
    for ( int i = 0; i < 8; ++i )
    {
        window.draw ( enemies [ i ].sprite );
    }
}
