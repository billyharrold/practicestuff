#include "Player.h"

Player::Player() : move_speed(5.0f), clicked_position(player.get()->getPosition())
{
	
}

Player::~Player()
{
}

sf::Sprite& Player::getSprite()
{
	return *player;
}

void Player::mouseClicked(sf::RenderWindow& window)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		clicked_position = window.mapPixelToCoords(sf::Mouse::getPosition(window));
		std::cout << "clicked";
	}
}

void Player::updatePos(float dt)
{
	

	sf::Vector2f current_position = player.get()->getPosition();
	sf::Vector2f distance = clicked_position - current_position;

	player.get()->move(distance * move_speed * dt);

}




