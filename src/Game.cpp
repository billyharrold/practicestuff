
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL));
}

Game::~Game()
{

}

bool Game::init()
{
	// uhhhhh
	player_texture.loadFromFile("../Data/Images/kenney_animalpackredux/PNG/Round/bear.png");

	player.getSprite().setTexture(player_texture);
  return true;
}

void Game::update(float dt)
{

}

void Game::render()
{
	window.draw(player.getSprite());
}

void Game::mouseClicked(sf::Event event)
{
  //get the click position
  sf::Vector2i click = sf::Mouse::getPosition(window);


}

void Game::keyPressed(sf::Event event)
{

}


