#include "../lib/game.h"

int score = 0;
int level = 0;
int lives = 0;

void runBlitz ()
{
    sf::SoundBuffer buffer;
    sf::Sound gun;
    sf::Font font;
    sf::Text sc, sco, lvl, life, lv, levl;
    sf::Sprite player, bullet, enemies [ size ], background;
    sf::Texture playerTexture, bulletTexture, enemyTexture, back;
    sf::RenderWindow window ( sf::VideoMode ( 1388, 720 ),
                              "DA GAME TO GAME ALL GAMES",
                              sf::Style::Close | sf::Style::Titlebar );

    setupText ( font, sc, sco, lvl, life, lv, levl );
    setupSounds ( buffer, gun );

    setupPlayer ( player, playerTexture );
    setupBullet ( bullet, bulletTexture );
    setupEnemies ( enemies, enemyTexture );
    setupBackground ( background, back );

    while ( window.isOpen () )
    {
        sf::Event evnt;
        while ( window.pollEvent ( evnt ) )
            if ( evnt.type == sf::Event::Closed )
                window.close ();

        handleCollision ( player, enemies, bullet, lv, sc, window );

        if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Key::D ) )
        {
            player.move ( 0.3f, 0.0f );
            if ( player.getPosition ().x < 0.0f )
            {
                player.setPosition ( 0.0f, player.getPosition ().y );
            }
            else if ( player.getPosition ().x > 1329.0f )
            {
                player.setPosition ( 1329.0f, player.getPosition ().y );
            }
        }
        if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Key::A ) )
        {
            player.move ( -0.3f, 0.0f );
            if ( player.getPosition ().x < 0.0f )
            {
                player.setPosition ( 0.0f, player.getPosition ().y );
            }
            else if ( player.getPosition ().x > 1329.0f )
            {
                player.setPosition ( 1329.0f, player.getPosition ().y );
            }
        }

        if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Key::Enter ) )
        {
            sf::Vector2f playerPos = player.getPosition ();
            bullet.setPosition ( playerPos.x, playerPos.y );
            bullet.move ( 0.0f, -3.0f );
            gun.play ();
        }
        if ( sf::Keyboard::isKeyPressed ( sf::Keyboard::Key::Escape ) )
        {
            window.close ();
        }

        moveEnemies ( enemies );

        window.clear ();
        window.draw ( background );
        window.draw ( player );
        window.draw ( bullet );

        for ( int i = 0; i < size; ++i )
        {
            if ( enemies [ i ].getPosition ().y >= 0 )
            {
                window.draw ( enemies [ i ] );
            }
        }

        levl.setString ( std::to_string ( level ) );
        bullet.move ( 0.0f, -9.0f );
        window.draw ( life );
        window.draw ( lv );
        window.draw ( levl );
        window.draw ( lvl );
        window.draw ( sco );
        window.draw ( sc );
        window.display ();
    }
}

void setupText ( sf::Font &font, sf::Text &sc, sf::Text &sco, sf::Text &lvl,
                 sf::Text &life, sf::Text &lv, sf::Text &levl )
{
    font.loadFromFile ( "assets/font/arial.ttf" );

    sc.setFont ( font );
    sc.setPosition ( 100.0, 0.0 );
    sc.setCharacterSize ( 24 );

    sco.setFont ( font );
    sco.setString ( "SCORE " );
    sco.setCharacterSize ( 24 );

    lvl.setFont ( font );
    lvl.setString ( "LEVEL " );
    lvl.setPosition ( 0.0, 24.0 );
    lvl.setCharacterSize ( 24 );

    life.setFont ( font );
    life.setString ( "LIVES " );
    life.setPosition ( 0.0, 48.0 );
    life.setCharacterSize ( 24 );

    lv.setFont ( font );
    lv.setPosition ( 70.0, 48.0 );
    lv.setCharacterSize ( 24 );

    levl.setFont ( font );
    levl.setPosition ( 70.0, 24.0 );
    levl.setCharacterSize ( 24 );
}

void setupSounds ( sf::SoundBuffer &buffer, sf::Sound &gun )

{
    buffer.loadFromFile ( "assets/music/guns.wav" );
    gun.setBuffer ( buffer );
}

bool collision ( const sf::Sprite &sprite, const sf::Sprite &otherSprite )
{
    return sprite.getGlobalBounds ().intersects (
        otherSprite.getGlobalBounds () );
}

void setupPlayer ( sf::Sprite &player, sf::Texture &playerTexture )
{
    playerTexture.loadFromFile ( "assets/images/les.jpeg" );
    player.setTexture ( playerTexture );
    player.setScale ( 0.1f, 0.1f );
    player.setPosition ( 650.0f, 550.0f );
}

void setupBullet ( sf::Sprite &bullet, sf::Texture &bulletTexture )
{
    bulletTexture.loadFromFile ( "assets/images/bullet.jpeg" );
    bullet.setTexture ( bulletTexture );
    bullet.setScale ( 0.1f, 0.1f );
}

void setupEnemies ( sf::Sprite enemies [ size ], sf::Texture &enemyTexture )
{
    enemyTexture.loadFromFile ( "assets/images/meow.jpeg" );

    for ( int i = 0; i < size; ++i )
    {
        enemies [ i ].setTexture ( enemyTexture );
        enemies [ i ].setColor ( sf::Color ( 255, 255, 255, 255 ) );
        enemies [ i ].setScale ( 0.2f, 0.2f );
        enemies [ i ].setPosition (
            static_cast<float> ( rand () % ( 1200 - 10 ) + 10 ), 0.0f );
    }
}

void setupBackground ( sf::Sprite &background, sf::Texture &back )
{
    back.loadFromFile ( "assets/images/backshots.jpeg" );
    background.setTexture ( back );
    background.setScale ( 2.5f, 2.5f );
}

void handleCollision ( sf::Sprite &player, sf::Sprite enemies [ size ],
                       sf::Sprite &bullet, sf::Text &lv, sf::Text &sc,
                       sf::RenderWindow &window )
{
    for ( int i = 0; i < size; ++i )
    {
        enemies [ i ].move ( 0.0f, 0.05f );

        if ( enemies [ i ].getPosition ().y >
             static_cast<float> ( window.getSize ().y ) )
        {
            enemies [ i ].setPosition (
                static_cast<float> ( rand () % ( 1200 - 10 ) + 10 ), 0.0f );
        }

        if ( collision ( player, enemies [ i ] ) )
        {
            enemies [ i ].setPosition ( 2000, 2000 );
            lives++;
            lv.setString ( std::to_string ( 3 - lives ) );
            if ( lives == 3 )
                window.close ();
        }

        if ( collision ( enemies [ i ], bullet ) )
        {
            enemies [ i ].setPosition (
                -100, -100 ); // Move the enemy out of the window
            score += 10;
            // Assuming sc is a global Text variable
            sc.setString ( std::to_string ( score ) );
        }
    }
}

void moveEnemies ( sf::Sprite enemies [ size ] )
{
    for ( int i = 0; i < size; ++i )
    {
        if ( enemies [ i ].getPosition ().y >= 0 )
        {
            if ( score <= 100 )
            {
                enemies [ i ].move ( 0.0f, 0.05f );
                level = 1;
            }
            else if ( score <= 200 && score > 100 )
            {
                enemies [ i ].move ( 0.0f, 0.08f );
                level = 2;
            }
            else if ( score <= 300 && score > 200 )
            {
                enemies [ i ].move ( 0.0f, 0.11f );
                level = 3;
            }
            else if ( score <= 400 && score > 300 )
            {
                enemies [ i ].move ( 0.0f, 0.14f );
                level = 4;
            }
            else
            {
                enemies [ i ].move ( 0.0f, 0.17f );
                level = 5;
            }
        }
    }
}
