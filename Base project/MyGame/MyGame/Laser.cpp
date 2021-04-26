#include "Laser.h"

const float SPEED = 1.2f;

Laser::Laser(sf::Vector2 pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/laser.png"));
	sprite_.setPosition(pos);
	assignTag("laser");
}

void Laser::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}