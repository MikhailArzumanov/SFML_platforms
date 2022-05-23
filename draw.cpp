#include "main_functions.hpp"
#include "window.hpp"
#include "platforms.hpp"
#include "beings.hpp"


#define in :

void draw() {
	window->clear();
	for(auto platform in platforms)
		platform->draw();
	for (auto being in beings)
		being->draw();
	window->display();
}