#include "EventPlatform.hpp"

sf::Color next(sf::Color color) {
	return color == sf::Color::White ? sf::Color::Black : sf::Color::White;
}


void EventPlatform::onKeyPressed(sf::Keyboard::Key key) {
	if (key == sf::Keyboard::Space) {
		color = next(color);
		shape->setFillColor(color);
	}
}