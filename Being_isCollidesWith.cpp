#include "Being.hpp"



bool Being::isCollidesWith(Entity* another) {
	switch (another->getType()) {
	case anExampleBeing:
	case anExamplePlatform:
		point dist = another->getP() - p;
		point sumDims = another->getDims() + dims;
		if (dist.x < sumDims.x && dist.y < sumDims.y)
			return true;
	}

	return false;
}