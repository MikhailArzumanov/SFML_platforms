#include "ExampleBeing.hpp"

bool switch_ = false;

void ExampleBeing::onKeyPressed(sf::Keyboard::Key key) {
	if (key == sf::Keyboard::Space) {
		auto shape = (sf::RectangleShape*)image;
		shape->setFillColor(switch_ ? sf::Color::White : sf::Color::Cyan);

		switch_ = !switch_;
	}
}