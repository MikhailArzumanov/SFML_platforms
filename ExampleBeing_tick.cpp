#include "ExampleBeing.hpp"
#include <iostream>

const float gravityCoefficient = 0.23f;
const float frictionCoefficient = 12.f;
const float speed = 3.f;
const float yforce = 8.712f; 
int cooldown = 0;


void ExampleBeing::tick() {

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		v.x = speed;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		v.x = -speed;
	else v.x = 0;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && !jumpFlag) {
		v.y = -yforce; jumpFlag = true;
	}

	a.y += gravityCoefficient;
	v += a;
	a = { 0.f,0.f};
	p += v;
	//std::cout << "dy = " << v.y << "\n";
	//...
	//...
	if (lastCollidable != nullptr) {
		jumpFlag = false;
		float platformUpperY = lastCollidable->getP().y - lastCollidable->getDims().y / 2;
		float beingLowerY = p.y + dims.y / 2;
		if (beingLowerY > platformUpperY) {
			p.y = platformUpperY - dims.y / 2 + 0.12f;
			v.y = v.y < 0 ? v.y : 0;
			v.x /= frictionCoefficient;
		}
		lastCollidable = nullptr;
	}
}