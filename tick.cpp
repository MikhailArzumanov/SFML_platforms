#include "main_functions.hpp"
#include "thePlatform.hpp"



int tickCounter = 0;

void tick() {
	platform->tick();
	tickCounter = 0;
}

void checkTick() {
	if (tickCounter++ > 1000)
		tick();
}