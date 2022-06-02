#include "SFML/Window/Event.hpp"
#include "main_functions.hpp"
#include "window.hpp"
#include "beings.hpp"
void handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			for(auto being : beings)
				being->onKeyPressed(theEvent.key.code);
			break;
		}
	}
}