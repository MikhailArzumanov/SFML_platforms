#include "SFML/Window/Event.hpp"
#include "main_functions.hpp"
#include "window.hpp"
void handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::Closed:
			window->close();
		}
	}
}