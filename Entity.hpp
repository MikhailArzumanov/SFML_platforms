#pragma once
#include "Drawable.hpp"
#include "Living.hpp"
#include "Ticking.hpp"
#include "point.hpp"
#include "EntityType.hpp"



class Entity : public Drawable, public Living, public Ticking {
protected:
	EntityType type;
	point p, dims;
	Entity(point position, point dims_) {
		p = position; dims = dims_;
	}
public:
	point getP(){return p;}
	point getDims(){return dims;}
	EntityType getType(){return type;}
};