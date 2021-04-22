#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject;

{
public:
	ship();

	void draw();

private:
	sf::Sprite Sprite_;
};

typedef std::shared_ptr <Ship> ShipPtr;
