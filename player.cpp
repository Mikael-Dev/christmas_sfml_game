#include "Player.h"

void Player::initVariables()
{
    /* if (!playerTex.loadFromFile("resources/pigu.png"))
    std::cout << "ERROR::PLAYER::COULD NOT LOAD PLAYER SPRITE."
              << "\n"; */
    playerTex.loadFromFile("resources/pigu.png");
    sprite.setTexture(playerTex);
    sprite.setPosition(sf::Vector2f(550.f, 400.f));
    sprite.setScale(0.2f, 0.2f);
}

Player::Player()
{
    initVariables();
}

Player::~Player()
{
}

void Player::update()
{
}

void Player::render(sf::RenderTarget &target)
{
    target.draw(sprite);
}
