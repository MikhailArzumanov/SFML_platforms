#pragma once
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>

class Eventable {
public:
	virtual void onKeyPressed(sf::Keyboard::Key key) {}
	virtual void onKeyReleased(sf::Keyboard::Key key) {}
	virtual void onMouseButtonPressed(sf::Event::MouseButtonEvent theEvent) {}
	virtual void onMouseButtonReleased(sf::Event::MouseButtonEvent theEvent) {}
	virtual void onMouseMoved(sf::Event::MouseMoveEvent theEvent) {}
	virtual void onJoystickButtonPressed(sf::Event::JoystickButtonEvent theEvent) {}
	virtual void onJoystickButtonReleased(sf::Event::JoystickButtonEvent theEvent) {}
};