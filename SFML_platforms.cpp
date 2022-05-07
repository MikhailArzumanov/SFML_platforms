#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

int main(){
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	while (window->isOpen()) {
		sf::Event theEvent;
		while (window->pollEvent(theEvent)) {
			switch (theEvent.type) {
			case sf::Event::Closed:
				window->close();
			}
		}

	}
}