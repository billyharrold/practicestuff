#pragma once


#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	~Player();

	sf::Sprite& getSprite();
	

protected:
	std::unique_ptr<sf::Sprite> player = std::make_unique<sf::Sprite>();
private:

	// lives
	// movement could go here as only player needs click to move




};
