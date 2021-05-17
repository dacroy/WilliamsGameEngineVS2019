#include "GameOverMessage.h"
#include "GameScene.h"
#include <sstream>

GameOverMessage::GameOverMessage(int score)
{
	text_.setFont(GAME.getFont("Resources/Courneuf-Regular.ttf"));
	text_.setPosition(sf::Vector2f(50.0, 50.0f));
	text_.setCharacterSize(48);
	text_.setFillColor(sf::Color::Red);

	std::stringstream stream;
	stream << "GAME OVER\n\nYOUR SCORE: " << "\n\n PRESS ENTER TO CONTINUE";
	text_.setString(stream.str());
}
void GameOverMessage::draw()
{
	GAME.getRenderWindow().draw(text_);
}

void GameOverMessage::update(sf::Time& time);
{
	if (sf::Keyoboard::isKeyPresed(sf::Keyboard::Return));
	{
		GameScenePtr scene = std::make_shared<GameScene>();
		GAME.setScene(Scene);
		return;
	}


}