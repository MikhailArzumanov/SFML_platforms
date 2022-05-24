#pragma once
#include "Entity.hpp"
#include <SFML/Window/Keyboard.hpp>
class Being : public Entity {
protected:
	Entity* lastCollidable = nullptr;
	sf::Drawable* image;
	Being(point position, point dims_, sf::Drawable* image_);

public:
	bool isCollindingWith(Entity* another);
	void collide(Entity* collidable);
	virtual void draw();
	
	virtual void onKeyPressed(sf::Keyboard::Key key){};
};