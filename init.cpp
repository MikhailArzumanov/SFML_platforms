#include "main_functions.hpp"
#include "window.hpp"
#include "thePlatform.hpp"
#include "platforms.hpp"
#include "ExampleBeing_constants.hpp"
#include "theBeing.hpp"
#include "beings.hpp"

sf::RenderWindow* window = nullptr;
ExamplePlatform* platform = nullptr;
ExampleBeing* exampleBeing = nullptr;
const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape* exampleRectangle = new sf::RectangleShape(examplePlatformDims);

void init() {
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	exampleBeingShape->setFillColor(exampleBeingColor);
	exampleRectangle->setFillColor(examplePlatformColor);
	platform = new ExamplePlatform(exampleRectangle, { 100.f, 100.f });
	platforms.push_back(platform);
	exampleBeing = new ExampleBeing({40.f, 40.f});
	beings.push_back(exampleBeing);
}