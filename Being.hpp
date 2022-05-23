#pragma once
#include "Entity.hpp"

class Being : public Entity {
protected:
	sf::Drawable* image;
	Being(point position, point dims_, sf::Drawable* image_);
public:
	bool isCollindingWith(Entity* another);
	void collide(Entity* collidable);
	virtual void draw();
};