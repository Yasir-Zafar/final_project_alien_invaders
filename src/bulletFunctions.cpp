#include "../lib/bulletFunctions.h"

void updateBullets ( Bullet bullets [], int &bulletCount, float deltaTime )
{
    // Update bullets
    for ( int i = 0; i < bulletCount; ++i )
        bullets [ i ].move ( deltaTime );

    // Remove bullets that are out of bounds
    for ( int i = 0; i < bulletCount; ++i )
        if ( bullets [ i ].shape.getPosition ().y < 0 )
        {
            // Move the last bullet to the current position, and reduce the
            // bullet count
            bullets [ i ] = bullets [ bulletCount - 1 ];
            bulletCount--;
            i--;
            // Move the index back by one so that we don't skip the next bullet
        }
}
