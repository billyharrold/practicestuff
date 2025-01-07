#include "Obstacles.h"

Obstacles::Obstacles()
{
	
	
}

Obstacles::~Obstacles()
{
}

sf::Sprite& Obstacles::getSprite()
{
	return *obstacle;
}



void Obstacles::draw(sf::RenderWindow& window) const
{
	window.draw(*obstacle.get());
}


