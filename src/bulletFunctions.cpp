// BulletFunctions.cpp
#include "../lib/bulletFunctions.h"

void updateBullets ( Bullet bullets [], int &bulletCount, float deltaTime )
{
    moveBullets ( bullets, bulletCount, deltaTime );
    removeOutOfBoundsBullets ( bullets, bulletCount );
}

void moveBullets ( Bullet bullets [], int &bulletCount, float deltaTime )
{
    for ( int i = 0; i < bulletCount; ++i )
    {
        bullets [ i ].move ( deltaTime );
    }
}

void removeOutOfBoundsBullets ( Bullet bullets [], int &bulletCount )
{
    for ( int i = 0; i < bulletCount; ++i )
    {
        if ( isBulletOutOfBounds ( bullets [ i ] ) )
        {
            removeBulletAtIndex ( bullets, bulletCount, i );
            --i; // Adjust the index after removal
        }
    }
}

bool isBulletOutOfBounds ( const Bullet &bullet )
{
    return bullet.shape.getPosition ().y < 0;
}

void removeBulletAtIndex ( Bullet bullets [], int &bulletCount, int index )
{
    bullets [ index ] = bullets [ bulletCount - 1 ];
    --bulletCount;
}
