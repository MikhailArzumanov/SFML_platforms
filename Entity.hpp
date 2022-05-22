#pragma once
#include "Drawable.hpp"
#include "Living.hpp"
#include "Ticking.hpp"
#include "point.hpp"



class Entity : public Drawable, public Living, public Ticking {
protected:
	point p, dims;
	Entity(point position, point dims_) {
		p = position; dims = dims_;
	}
};