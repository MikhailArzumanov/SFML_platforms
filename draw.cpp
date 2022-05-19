#include "main_functions.hpp"
#include "window.hpp"
#include "thePlatform.hpp"


void draw() {
	window->clear();
	platform->draw();
	window->display();
}