#include "ExampleBeing.hpp"

void ExampleBeing::draw() {
	auto shape = (sf::RectangleShape*)image;
	point lu_corner = p - dims/2;
	lu_corner >> shape;
}