#include "SFML/Window/Event.hpp"
#include "main_functions.hpp"
#include "window.hpp"
#include "eventables.hpp"
void handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			for(auto being : eventables) being->onKeyPressed(theEvent.key.code);
			break;
		case sf::Event::KeyReleased:
			for (auto being : eventables) being->onKeyReleased(theEvent.key.code);
			break;
		case sf::Event::MouseButtonPressed:
			for (auto being : eventables) being->onMouseButtonPressed(theEvent.mouseButton);
			break;
		case sf::Event::MouseButtonReleased:
			for (auto being : eventables) being->onMouseButtonReleased(theEvent.mouseButton);
			break;
		case sf::Event::MouseMoved:
			for (auto being : eventables) being->onMouseMoved(theEvent.mouseMove);
			break;
		case sf::Event::JoystickButtonPressed:
			for (auto being : eventables) being->onJoystickButtonPressed(theEvent.joystickButton);
			break;
		case sf::Event::JoystickButtonReleased:
			for (auto being : eventables) being->onJoystickButtonReleased(theEvent.joystickButton);
			break;
		}
	}
}