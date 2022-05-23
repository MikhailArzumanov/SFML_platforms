#include "ExampleBeing.hpp"
#include <iostream>

const float windage = 12.f;
const float gravityCoefficient = 3.f;

void ExampleBeing::tick() {
	a.y += gravityCoefficient;
	v += a;
	a = {0,0};
	p += v;
	std::cout <<"dy = " <<v.y <<"\n";
	v.y /= windage;
	//...
	lastCollidable = nullptr;
}