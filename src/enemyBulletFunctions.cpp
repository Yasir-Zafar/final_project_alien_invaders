#include "../lib/enemyBulletFunctions.h"

void tryEnemyShooting (
    Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ], int row, int col,
    EnemyBullet enemyBullets [], int &enemyBulletCount )
{
    // Check if the enemy has a clear line of sight to shoot
    if ( enemies [ row ][ col ].isActive &&
         !isEnemyInFront ( enemies, row, col ) )
    {
        // Random chance for the enemy to shoot
        if ( rand () % 100 < 1.0 ) // Adjust the percentage as needed
        {
            shootEnemyBullet ( enemyBullets, enemyBulletCount,
                               enemies [ row ][ col ].sprite.getPosition () );
        }
    }
}

bool isEnemyInFront ( Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                      int row, int col )
{
    // Check if there's an active enemy in the row in front of the given enemy
    int enemiesCount = MAX_ENEMIES_COLS * MAX_ENEMIES_ROWS;
    for ( int indexRow = row + 1; indexRow < MAX_ENEMIES_ROWS; ++indexRow )
    {
        // Check if we have reached the actual count of enemies
        if ( indexRow * MAX_ENEMIES_COLS + col >= enemiesCount )
        {
            break;
        }

        if ( enemies [ indexRow ][ col ].isActive )
        {
            return true; // There is an enemy in front
        }
    }
    return false;
}

bool isAnyEnemyBulletActive ( const EnemyBullet enemyBullets [],
                              int enemyBulletCount )
{
    for ( int i = 0; i < enemyBulletCount; ++i )
    {
        if ( enemyBullets [ i ].isActive )
        {
            return true; // At least one enemy bullet is active
        }
    }
    return false; // No enemy bullets are currently active
}

void shootEnemyBullet ( EnemyBullet enemyBullets [], int &enemyBulletCount,
                        sf::Vector2f position )
{
    // Check if there is space for a new enemy bullet and no active bullets
    if ( enemyBulletCount < MAX_ENEMY_BULLETS &&
         !isAnyEnemyBulletActive ( enemyBullets, enemyBulletCount ) )
    {
        // Find an inactive bullet slot
        for ( int i = 0; i < MAX_ENEMY_BULLETS; ++i )
        {
            if ( !enemyBullets [ i ].isActive )
            {
                // Initialize the bullet and mark it as active
                enemyBullets [ i ].initialize ( position );
                enemyBullets [ i ].isActive = true;
                enemyBulletCount++;
                break;
            }
        }
    }
}

void updateEnemyBullets ( EnemyBullet enemyBullets [], int &enemyBulletCount,
                          float deltaTime, int currentLevel )
{
    float enemyBulletSpeed =
        ENEMY_BULLET_SPEED + static_cast<float> ( ( currentLevel - 1 ) ) *
                                 ENEMY_BULLET_SPEED_INCREMENT;

    for ( int i = 0; i < enemyBulletCount; ++i )
    {
        if ( enemyBullets [ i ].isActive )
        {
            enemyBullets [ i ].move ( enemyBulletSpeed * deltaTime );

            // Check if the enemy bullet has gone off-screen
            if ( enemyBullets [ i ].shape.getPosition ().y > 600 )
            {
                // Deactivate the enemy bullet
                enemyBullets [ i ].isActive = false;
                enemyBulletCount--;
            }
        }
    }
}

void handlePlayerCollisionsWithEnemyBullets ( Player &player,
                                              EnemyBullet enemyBullets [],
                                              int &enemyBulletCount )
{
    for ( int i = 0; i < enemyBulletCount; ++i )
    {
        if ( enemyBullets [ i ].isActive &&
             player.sprite.getGlobalBounds ().intersects (
                 enemyBullets [ i ].shape.getGlobalBounds () ) )
        {
            // Handle player hit by enemy bullet
            // For example, decrease player lives, reset player position, etc.
            // Here, we'll just deactivate the bullet
            player.lives--;
            // Check for game over
            if ( player.lives <= 0 )
            {
                player.gameOver = true;
            }
            enemyBullets [ i ].isActive = false;
        }
    }
}
