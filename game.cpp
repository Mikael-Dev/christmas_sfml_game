#include "Game.h"

void Game::initVariables()
{
    // window = nullptr;

    running = true;
}

void Game::initWindow()
{
    videoMode.height = 600;
    videoMode.width = 800;
    window = new sf::RenderWindow(videoMode, "game_", sf::Style::Titlebar | sf::Style::Close);
    window->setFramerateLimit(60);
    window->setVerticalSyncEnabled(false);
}

void Game::initPlayer()
{
    player = new Player();
}

Game::Game()
{
    initWindow();
    initVariables();

    initPlayer();
}

Game::~Game()
{
    delete this->window;

    delete this->player;
}

void Game::isRunning()
{
    if (window->isOpen())
        running = true;
    else if (!window->isOpen())
        running = false;
}

void Game::run()
{
    while (window->isOpen())
    {
        pollEvents();

        update();
        render();
    }
}

void Game::pollEvents()
{
    sf::Event e;
    while (window->pollEvent(e))
    {
        if (e.Event::type == sf::Event::Closed)
            window->close();
        if (e.Event::KeyPressed && e.Event::key.code == sf::Keyboard::Escape)
            window->close();
    }
}

void Game::update()
{

    // pollEvents();

    player->update();
}

void Game::render()
{
    window->clear(sf::Color::Black);

    // draw game objects
    player->render(*window);

    window->display();
}
