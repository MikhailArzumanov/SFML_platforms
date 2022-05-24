#include "ExampleBeing.hpp"
#include <iostream>

const float windage = 12.f;
const float gravityCoefficient = 0.12f;
const float frictionCoefficient = 12.f;
const float speed = 3.f;

void ExampleBeing::tick() {

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		v.x = speed;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		v.x = -speed;
	else v.x = 0;

	a.y += gravityCoefficient;
	v += a;
	a = { 0.f,0.f};
	p += v;
	std::cout << "dy = " << v.y << "\n";

	//...
	//...

	if (lastCollidable != nullptr) {
		float platformUpperY = lastCollidable->getP().y - lastCollidable->getDims().y / 2;
		float beingLowerY = p.y + dims.y / 2;
		if (beingLowerY > platformUpperY) {
			p.y = platformUpperY - dims.y / 2 + 0.12f;
			v.x /= frictionCoefficient;
		}
		lastCollidable = nullptr;
	}
}