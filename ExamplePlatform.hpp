#pragma once
#include "Platform.hpp"


extern const point examplePlatformDims;

class ExamplePlatform : public Platform {
public:
	ExamplePlatform(sf::RectangleShape* shape_, point position);
	void tick();
	bool is_living();
};