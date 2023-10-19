#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include <iostream>

class Player
{
private:
    void initVariables();

    sf::Texture playerTex;
    sf::Sprite sprite;

public:
    Player();
    virtual ~Player();

    void update();
    void render(sf::RenderTarget &target);
};