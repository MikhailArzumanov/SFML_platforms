#include "ExampleBeing.hpp"

const float speed = 2.3f;

void ExampleBeing::onKeyPressed(sf::Keyboard::Key key) {
	switch (key) {
	case sf::Keyboard::W:
		//v.y = -speed;
		break;
	case sf::Keyboard::A:
		v.x = -speed;
		break;
	case sf::Keyboard::S:
		break;
	case sf::Keyboard::D:
		v.x = speed;
		break;
	}
}