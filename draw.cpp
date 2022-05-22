#include "main_functions.hpp"
#include "window.hpp"
#include "platforms.hpp"

#define in :

void draw() {
	window->clear();
	for(auto platform in platforms)
		platform->draw();
	window->display();
}