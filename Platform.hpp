#pragma once

#include "Entity.hpp"

class Platform : public Entity {
protected:
	Platform(point position, point dims_) {
		p = position; dims = dims_;
	}
};