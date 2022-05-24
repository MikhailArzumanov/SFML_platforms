#include "main_functions.hpp"
#include "platforms.hpp"
#include "beings.hpp"
#include "theClock.hpp"

#define in :

void tick() {
	for(auto platform in platforms)
		platform->tick();
	for (auto being in beings) {
		being->tick();
		for (auto platform in platforms)
			if (being->isCollindingWith(platform))
				being->collide(platform);
		for (auto another in beings)
			if (being != another && being->isCollindingWith(another))
				being->collide(another);
	}
}

void checkTick() {
	if (theClock.getElapsedTime().asSeconds() >= 1 / 60.f) {
		theClock.restart();
		tick();
	}
}