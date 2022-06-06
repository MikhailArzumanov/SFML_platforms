#include "EventPlatform.hpp"
const float WIDTH_SPEED = 0.3f;
void EventPlatform::tick() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		dims.x -= WIDTH_SPEED;
		shape->setSize(dims);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		dims.x += WIDTH_SPEED;
		shape->setSize(dims);
	}
}