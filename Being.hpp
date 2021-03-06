#pragma once
#include "Entity.hpp"
#include "Platform.hpp"
#include <SFML/Window/Keyboard.hpp>

class Being : public Entity {

protected:
	Platform* lastReliance = nullptr;
	sf::Drawable* image;
	Being(point position, point dims_, sf::Drawable* image_);

public:
	bool isCollindingWith(Entity* another);
	void collide(Entity* collidable);
	virtual void draw();

};