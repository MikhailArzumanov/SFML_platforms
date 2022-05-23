#include "ExampleBeing.hpp"

const float gravityCoefficient = 1.f;

void ExampleBeing::tick() {
	a.y += gravityCoefficient;
	v += a;
	a = {0,0};
	p += v;
	//...
}