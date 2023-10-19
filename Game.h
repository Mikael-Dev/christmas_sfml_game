#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include "Player.h"

class Game
{
private:
    sf::RenderWindow *window;
    sf::VideoMode videoMode;

    // Player class
    Player *player;

    void initVariables();
    void initWindow();
    void initPlayer();

public:
    bool running;

    Game();
    virtual ~Game();

    void isRunning();

    void pollEvents();

    void run();

    void update();
    void render();
};
