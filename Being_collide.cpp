#include "Being.hpp"
#include <iostream>

const float d_max = 10.f;
const point v_max = { 0, -4.f };

void Being::collide(Entity* collidable) {
	switch (collidable->getType()) {
	case anExampleBeing:
		//...
		break;
	case anExamplePlatform:
		point colP = collidable->getP();
		point colDims = collidable->getDims();
		float distY = (p.y+dims.y/2) - (colP.y-colDims.y/2);
		if (0 <= distY && distY <= d_max) {
			lastReliance = static_cast<Platform*>(collidable);
			float c = distY / d_max;
			point dv = v_max * c;
			a += dv;
		}
		break;
	}
}