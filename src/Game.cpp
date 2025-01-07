
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


	o1.getSprite().setTexture(player_texture);
	o1.getSprite().setPosition(300, 300);
	
	
  return true;
}

void Game::update(float dt)
{
	player.mouseClicked(window);
	player.updatePos(dt);
}

void Game::render()
{
	window.draw(player.getSprite());
	window.draw(o1.getSprite());
}

void Game::mouseClicked(sf::Event event)
{
  //get the click position
  sf::Vector2i click = sf::Mouse::getPosition(window);


}

void Game::keyPressed(sf::Event event)
{

}


