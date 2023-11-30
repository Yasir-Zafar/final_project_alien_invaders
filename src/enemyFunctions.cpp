#include "../lib/enemiesFunctions.h"
#include "../lib/enemyBulletFunctions.h" // Include the enemy bullet functions

void updateEnemiesFormation (
    int &currentLevel, Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount, float deltaTime, EnemyBullet enemyBullets [],
    int &enemyBulletCount )
{
    static bool moveRight = true;

    // Adjust enemy speed based on the current level
    float enemySpeed =
        ENEMIES_SPEED +
        static_cast<float> ( ( currentLevel - 1 ) ) * ENEMY_SPEED_INCREMENT;

    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            // Check if we have reached the actual count of enemies
            if ( i * MAX_ENEMIES_COLS + j >= enemiesCount )
            {
                break;
            }

            sf::Vector2f enemyPosition =
                enemies [ i ][ j ].sprite.getPosition ();
            if ( moveRight )
            {
                // Update the position of the enemy
                enemies [ i ][ j ].move ( enemySpeed * deltaTime, 0.0f );

                // Check if the enemy has hit the right wall
                if ( enemyPosition.x + ENEMIES_WIDTH >= 800 )
                {
                    moveRight = false;
                    for ( int row = 0; row < MAX_ENEMIES_ROWS; ++row )
                    {
                        for ( int col = 0; col < MAX_ENEMIES_COLS; ++col )
                        {
                            enemies [ row ][ col ].move ( 0.0f,
                                                          ENEMIES_HEIGHT );
                        }
                    }
                    break;
                }
            }
            else
            {
                // Update the position of the enemy
                enemies [ i ][ j ].move ( -enemySpeed * deltaTime, 0.0f );

                // Check if the enemy has hit the left wall
                if ( enemyPosition.x <= 0 )
                {
                    moveRight = true;
                    for ( int row = 0; row < MAX_ENEMIES_ROWS; ++row )
                    {
                        for ( int col = 0; col < MAX_ENEMIES_COLS; ++col )
                        {
                            enemies [ row ][ col ].move ( 0.0f,
                                                          ENEMIES_HEIGHT );
                        }
                    }
                    break;
                }
            }
            tryEnemyShooting ( enemies, i, j, enemyBullets, enemyBulletCount );
        }
    }
}

void spawnEnemiesFormation (
    sf::RenderWindow &window,
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
    int &enemiesCount )
{
    window.clear ();
    for ( int i = 0; i < MAX_ENEMIES_ROWS; ++i )
    {
        for ( int j = 0; j < MAX_ENEMIES_COLS; ++j )
        {
            enemies [ i ][ j ].initialize ( sf::Vector2f (
                static_cast<float> ( 40 +
                                     static_cast<float> ( j ) *
                                         ( ENEMIES_WIDTH + ENEMIES_PADDING ) ),
                static_cast<float> (
                    40 + static_cast<float> ( i ) *
                             ( ENEMIES_HEIGHT + ENEMIES_PADDING ) ) ) );
            // Resetting the sprite properties
            // Assuming texture is a member of the Enemies struct
            enemies [ i ][ j ].sprite.setTexture ( enemies [ i ][ j ].texture );
        }
    }
    enemiesCount = MAX_ENEMIES_ROWS * MAX_ENEMIES_COLS;
}
