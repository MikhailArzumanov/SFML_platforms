#include "Being.hpp"

const float d_max = 10.f;
const point v_max = {0, -0.1f};

void Being::collide(Entity* collidable) {
	switch (collidable->getType()) {
	case anExampleBeing:
		//...
		break;
	case anExamplePlatform:
		float distY = collidable->getP().y-p.y;
		if (0 <= distY && distY <= d_max) {
			float c = distY/d_max;
			point dv = v_max*c;
			v += dv;
		}
		break;
	}
}