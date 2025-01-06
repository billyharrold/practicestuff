#pragma once


#include <SFML/Graphics.hpp>

#include <cmath>
#include <iostream>

class Player
{
public:
	Player();
	~Player();

	sf::Sprite& getSprite();
	
	void mouseClicked(sf::RenderWindow& window);
	void updatePos(float dt);

protected:
	std::unique_ptr<sf::Sprite> player = std::make_unique<sf::Sprite>();
private:

	// lives
	// movement could go here as only player needs click to move
	sf::Vector2f clicked_position;
	float move_speed = 5.0f;

	// normalising vector inherit from vector class



};
