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
			for(auto eventable : eventables) eventable->onKeyPressed(theEvent.key.code);
			break;
		case sf::Event::KeyReleased:
			for (auto eventable : eventables) eventable->onKeyReleased(theEvent.key.code);
			break;
		case sf::Event::MouseButtonPressed:
			for (auto eventable : eventables) eventable->onMouseButtonPressed(theEvent.mouseButton);
			break;
		case sf::Event::MouseButtonReleased:
			for (auto eventable : eventables) eventable->onMouseButtonReleased(theEvent.mouseButton);
			break;
		case sf::Event::MouseMoved:
			for (auto eventable : eventables) eventable->onMouseMoved(theEvent.mouseMove);
			break;
		case sf::Event::JoystickButtonPressed:
			for (auto eventable : eventables) eventable->onJoystickButtonPressed(theEvent.joystickButton);
			break;
		case sf::Event::JoystickButtonReleased:
			for (auto eventable : eventables) eventable->onJoystickButtonReleased(theEvent.joystickButton);
			break;
		}
	}
}