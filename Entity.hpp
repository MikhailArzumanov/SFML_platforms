#pragma once
#include "Drawable.hpp"
#include "Living.hpp"
#include "Ticking.hpp"
#include "point.hpp"
#include "EntityType.hpp"
#include <SFML/Window/Keyboard.hpp>


class Entity : public Drawable, public Living, public Ticking {
protected:
	EntityType type;
	point p, v, a, dims;
	Entity(point position, point dims_) {
		p = position; dims = dims_;
	}
public:
	point getP(){return p;}
	point getDims(){return dims;}
	EntityType getType(){return type;}

	virtual void onKeyPressed(sf::Keyboard::Key key) {}
	virtual void onKeyReleased(sf::Keyboard::Key key) {}
	virtual void onMouseButtonPressed(sf::Event::MouseButtonEvent theEvent) {}
	virtual void onMouseButtonReleased(sf::Event::MouseButtonEvent theEvent) {}

};