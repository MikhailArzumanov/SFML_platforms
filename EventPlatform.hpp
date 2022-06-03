#pragma once
#include "Platform.hpp"
extern point eventPlatformDims;
class EventPlatform : public Platform {
private:
	sf::Color color = sf::Color::White;
public:
	EventPlatform(sf::RectangleShape* shape_, point position);
	void tick();
	bool is_living() { return true; }
	void onKeyPressed(sf::Keyboard::Key key);
};