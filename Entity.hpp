#pragma once
#include "Drawable.hpp"
#include "Living.hpp"
#include "Ticking.hpp"
#include "point.hpp"
#include "EntityType.hpp"
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include "Eventable.hpp"

class Entity : public Drawable, public Living, public Ticking, public Eventable {
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
};