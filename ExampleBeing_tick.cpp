#include "ExampleBeing.hpp"
#include <iostream>

const float windage = 12.f;
const float gravityCoefficient = 3.f;
const float frictionCoefficient = 12.f;

void ExampleBeing::tick() {
	a.y += gravityCoefficient;
	v += a;
	a = { 4 / 100.f,0.f };
	p += v;
	std::cout << "dy = " << v.y << "\n";
	v.y /= windage;

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