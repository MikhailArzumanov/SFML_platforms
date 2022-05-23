#pragma once
#include "Entity.hpp"



class Platform : public Entity {
protected:
	sf::RectangleShape* shape;
	Platform(point position, point dims_, sf::RectangleShape* shape_);
public:
	void draw();
};