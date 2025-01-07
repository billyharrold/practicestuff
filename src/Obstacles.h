#pragma once

#include "Player.h"

class Obstacles
{
public:
	
	Obstacles();
	~Obstacles();

	sf::Sprite& getSprite();

	void draw(sf::RenderWindow& window) const;
	

protected:
	std::unique_ptr<sf::Sprite> obstacle = std::make_unique<sf::Sprite>();
private:

	//sf::Sprite obstacle;


};
