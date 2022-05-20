#include "main_functions.hpp"
#include "window.hpp"
#include "thePlatform.hpp"


sf::RenderWindow* window = nullptr;
ExamplePlatform* platform = nullptr;
const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape* exampleRectangle = new sf::RectangleShape(examplePlatformDims);

void init() {
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");

	exampleRectangle->setFillColor(examplePlatformColor);
	platform = new ExamplePlatform(exampleRectangle, { 0, 0 });
}