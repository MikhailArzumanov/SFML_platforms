#include "main_functions.hpp"
#include "window.hpp"

void cycle() {
	while (window->isOpen())
		iterate();
}