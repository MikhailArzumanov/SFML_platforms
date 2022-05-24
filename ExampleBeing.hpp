#pragma once
#include "Being.hpp"

class ExampleBeing : public Being {
private:
	bool jumpFlag = false;
public:
	ExampleBeing(point position);
	void tick();
	void draw();
	bool is_living(){return true;}
};