#pragma once
#include "Platform.hpp"



extern const point examplePlatformDims;

class ExamplePlatform : public Platform {
private:
	sf::RectangleShape shape;
public:
	ExamplePlatform(sf::RectangleShape shape_, point position);
	void draw();
	void tick();
	bool is_living();
};