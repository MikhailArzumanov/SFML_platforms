#include "main_functions.hpp"
#include "window.hpp"
#include "thePlatform.hpp"
#include "platforms.hpp"
#include "ExampleBeing_constants.hpp"
#include "theBeing.hpp"
#include "beings.hpp"
#include "theEventPlatform.hpp"
#include "eventables.hpp"

sf::RenderWindow* window = nullptr;
std::list<Eventable*> eventables;
EventPlatform* theEventPlatform = nullptr;
ExamplePlatform* platform = nullptr;
ExampleBeing* exampleBeing = nullptr;
const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape* exampleRectangle = new sf::RectangleShape(examplePlatformDims);
sf::RectangleShape* eventRectangle = new sf::RectangleShape(eventPlatformDims);

void init() {
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");

	exampleBeingShape->setFillColor(exampleBeingColor);
	exampleRectangle->setFillColor(examplePlatformColor);
	eventRectangle->setFillColor(sf::Color::White);

	platform = new ExamplePlatform(exampleRectangle, { 100.f, 200.f });
	theEventPlatform = new EventPlatform(eventRectangle, { 230.f, 200.f });

	platforms.push_back(platform);
	platforms.push_back(theEventPlatform);
	platforms.push_back(new ExamplePlatform(exampleRectangle, { 200.f, 100.f }));

	exampleBeing = new ExampleBeing({40.f, 40.f});
	beings.push_back(exampleBeing);

	eventables.push_back(theEventPlatform);
	eventables.push_back(exampleBeing);
}