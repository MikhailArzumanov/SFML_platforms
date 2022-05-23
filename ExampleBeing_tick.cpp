#include "ExampleBeing.hpp"

void ExampleBeing::tick() {
	p += v;
	v = {0,0};
	//...
}