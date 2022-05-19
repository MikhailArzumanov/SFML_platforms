#pragma once

#include "Drawable.hpp"
#include "Living.hpp"
#include "Ticking.hpp"
#include "point.hpp"


class Entity : Drawable, Living, Ticking {
protected:
	point p, dims;
};