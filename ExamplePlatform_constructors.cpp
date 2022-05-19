#include "ExamplePlatform.hpp"

const point examplePlatformDims = { 120, 12 };

ExamplePlatform::ExamplePlatform(sf::RectangleShape shape_, point position) : Platform(position, examplePlatformDims) {
	shape = shape_;
}