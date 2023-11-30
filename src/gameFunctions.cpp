#include "../lib/gameFunctions.h"
#include "../lib/bulletFunctions.h"
#include "../lib/enemiesFunctions.h"
#include "../lib/enemyBulletFunctions.h"
#include "../lib/playerFunctions.h"
#include "../lib/renderGame.h"
#include <iostream>

void processGame ( sf::RenderWindow &window, int &currentLevel, Player &player,
                   Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                   Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                   int &enemiesCount, sf::Clock &clock,
                   EnemyBullet enemyBullets [], int &enemyBulletCount )
{
    processEvents ( window, player, bullets, bulletCount, clock );
    updateGame ( currentLevel, bullets, bulletCount, enemies,
                 clock.restart ().asSeconds (), player, enemiesCount,
                 enemyBullets, enemyBulletCount );
    renderGame ( window, player, bullets, bulletCount, enemies, enemyBullets,
                 enemyBulletCount );
}

void processEvents ( sf::RenderWindow &window, Player &player,
                     Bullet bullets [ MAX_BULLETS ], int &bulletCount,
                     sf::Clock &clock )
{
    sf::Event event;
    while ( window.pollEvent ( event ) )
        if ( event.type == sf::Event::Closed )
            window.close ();

    handlePlayerMovement ( player, clock );

    handleBulletShooting ( player, bullets, bulletCount );
}

void updateGame ( int &currentLevel, Bullet bullets [ MAX_BULLETS ],
                  int &bulletCount,
                  Enemies enemies [ MAX_ENEMIES_ROWS ][ MAX_ENEMIES_COLS ],
                  float deltaTime, Player &player, int enemiesCount,
                  EnemyBullet enemyBullets [], int &enemyBulletCount )
{
    updateBullets ( bullets, bulletCount, deltaTime );
    updateEnemiesFormation ( currentLevel, enemies, enemiesCount, deltaTime,
                             enemyBullets, enemyBulletCount );
    handlePlayerEnemiesCollisions ( player, enemies,
                                    enemiesCount ); // Fixed function name
    handleBulletEnemiesCollisions ( bullets, bulletCount, enemies, player,
                                    enemiesCount );
    updateEnemyBullets ( enemyBullets, enemyBulletCount, deltaTime,
                         currentLevel );
    handlePlayerCollisionsWithEnemyBullets ( player, enemyBullets,
                                             enemyBulletCount );
}

void cleanupGame ( sf::RenderWindow &window ) { window.close (); }
