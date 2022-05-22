#include "main_functions.hpp"
#include "platforms.hpp"

#define in :
int tickCounter = 0;

void tick() {
	for(auto platform in platforms)
		platform->tick();
	tickCounter = 0;
}

void checkTick() {
	if (tickCounter++ > 1000)
		tick();
}