#pragma once

#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

class Game
{
private:
    sf::RenderWindow *window;
    sf::VideoMode videoMode;
    sf::Event event;

    void initVariables();
    void initWindow();

public:
    bool running;

    Game();
    virtual ~Game();

    const bool isRunning() const;

    void pollEvents();

    void update();
    void render();
};
