#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "window.hpp"
#include "ExamplePlatform.hpp"

sf::RenderWindow* window;


const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape exampleRectangle = sf::RectangleShape(examplePlatformDims);


ExamplePlatform platform;


int tickCounter = 0;

void handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::Closed:
			window->close();
		}
	}
}

void tick() {
	platform.tick();
	tickCounter = 0;
}
void checkTick() {
	if (tickCounter++ > 1000)
		tick();
}

void draw() {
	window->clear();
	platform.draw();
	window->display();
}

void iterate() {
	handleEvents();
	checkTick();
	draw();
}

void cycle() {
	while (window->isOpen())
		iterate();
}

int main(){
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	exampleRectangle.setFillColor(examplePlatformColor);
	platform = ExamplePlatform(exampleRectangle, { 0, 0 });
	cycle();
}