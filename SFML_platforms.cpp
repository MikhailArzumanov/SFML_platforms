#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "window.hpp"
#include "Platform.hpp"


sf::RenderWindow* window;


const point examplePlatformDims = { 120, 12 };
const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape exampleRectangle = sf::RectangleShape(examplePlatformDims);

class ExamplePlatform : public Platform {
public:
	ExamplePlatform(point position) : Platform(position, examplePlatformDims) {}
	void draw() {
		point lu_corner = p - dims / 2;
		lu_corner >> exampleRectangle;
	}
	void tick() {
		p.x++;
		p.y++;
	}
	bool is_living() { return true; }
};

ExamplePlatform platform = ExamplePlatform({ 0, 0 });


int tickCounter = 0;

void tick() {
	platform.tick();
	tickCounter = 0;
}

void draw() {
	window->clear();
	platform.draw();
	window->display();
}

int main(){
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	exampleRectangle.setFillColor(examplePlatformColor);
	
	while (window->isOpen()) {
		sf::Event theEvent;
		while (window->pollEvent(theEvent)) {
			switch (theEvent.type) {
			case sf::Event::Closed:
				window->close();
			}
		}

		if (tickCounter++ > 1000)
			tick();
		draw();

	}
}