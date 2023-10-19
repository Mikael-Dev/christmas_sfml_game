#include "Game.h"

void Game::initVariables()
{
    window = nullptr;
}

void Game::initWindow()
{
    videoMode.height = 600;
    videoMode.width = 800;
    window = new sf::RenderWindow(videoMode, "game_", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
    initVariables();
    initWindow();
}

Game::~Game()
{
    delete window;
}

const bool Game::isRunning() const
{
    return window->isOpen();
}

void Game::pollEvents()
{
    while (window->pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window->close();
            break;
        case sf::Event::KeyPressed:
            if (event.key.code == sf::Keyboard::Escape)
                window->close();
            break;
        }
    }
}

void Game::update()
{
    pollEvents();
}

void Game::render()
{
    window->clear(sf::Color(255, 255, 255, 255));

    // draw game objects

    window->display();
}
