#pragma once
#include "Being.hpp"

class ExampleBeing : public Being {
public:
	ExampleBeing(point position);
	void tick();
	void draw();
	bool is_living(){return true;}

	void onKeyPressed(sf::Keyboard::Key key);
};