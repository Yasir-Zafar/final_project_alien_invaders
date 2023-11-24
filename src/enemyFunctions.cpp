#include "../lib/enemiesFunctions.h"

// void updateEnemies ( Enemies enemies [], int &enemiesCount, float deltaTime )
// {
//     for ( int i = 0; i < enemiesCount; ++i )
//         enemies [ i ].move ( deltaTime );

//     // Add logic to spawn new enemies or remove enemies out of bounds
// }

void resetEnemies ( Enemies &enemies )
{
    // Reset the enemies to an initial state
    enemies.shape.setPosition ( 375, 200 );
    enemies.isActive =
        false; // Assuming isActive is part of your Enemies structure
}
