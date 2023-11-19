#include "../lib/enemyFunctions.h"

void updateEnemy ( Enemy enemies [], int &enemyCount, float deltaTime )
{
    for ( int i = 0; i < enemyCount; ++i )
        enemies [ i ].move ( deltaTime );

    // Add logic to spawn new enemies or remove enemies out of bounds
}
