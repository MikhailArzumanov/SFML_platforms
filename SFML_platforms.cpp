#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

sf::RenderWindow* window;

struct point {
	float x, y;
	operator sf::Vector2f() const {
		return sf::Vector2f({ x, y });
	}

	point operator-(point another) {
		return { x - another.x, y - another.y };
	}
	point operator/(float scalar) {
		return { x / scalar, y / scalar };
	}
};

int main(){
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
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