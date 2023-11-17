#ifndef BULLET_FUNCTIONS_H
#define BULLET_FUNCTIONS_H

#include "../lib/bullet.h"
#include <SFML/Graphics.hpp>

void updateBullets ( Bullet bullets [], int &bulletCount, float deltaTime );
void moveBullets ( Bullet bullets [], int &bulletCount, float deltaTime );
void removeOutOfBoundsBullets ( Bullet bullets [], int &bulletCount );
bool isBulletOutOfBounds ( const Bullet &bullet );
void removeBulletAtIndex ( Bullet bullets [], int &bulletCount, int index );

#endif // BULLET_FUNCTIONS_H
