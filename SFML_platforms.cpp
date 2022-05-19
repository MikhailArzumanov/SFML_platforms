#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "window.hpp"
#include "thePlatform.hpp"

sf::RenderWindow* window;
ExamplePlatform* platform = nullptr;


const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape exampleRectangle = sf::RectangleShape(examplePlatformDims);



void handleEvents();

int tickCounter = 0;
void tick();
void checkTick();

void draw();

void iterate();
void cycle();

void init();

void handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::Closed:
			window->close();
		}
	}
}

int tickCounter = 0;

void tick() {
	platform->tick();
	tickCounter = 0;
}

void checkTick() {
	if (tickCounter++ > 1000)
		tick();
}

void draw() {
	window->clear();
	platform->draw();
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

void init() {
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	exampleRectangle.setFillColor(examplePlatformColor);
	platform = new ExamplePlatform(exampleRectangle, { 0, 0 });
}

int main(){
	init();
	cycle();
}