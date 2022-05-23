#include "main_functions.hpp"
#include "platforms.hpp"
#include "beings.hpp"

#define in :
int tickCounter = 0;

void tick() {
	for(auto platform in platforms)
		platform->tick();
	for (auto being in beings) {
		being->tick();
		for (auto platform in platforms)
			if (being->isCollidesWith(platform))
				being->collide(platform);

		for (auto another in beings)
			if (being != another && being->isCollidesWith(another))
				being->collide(another);
	}
	tickCounter = 0;
}

void checkTick() {
	if (tickCounter++ > 1000)
		tick();
}