#include "Being.hpp"



bool Being::isCollindingWith(Entity* another) {
	switch (another->getType()) {
	case anExampleBeing:
	case anExamplePlatform:
		point dist = another->getP() - p;
		point sumDimsByTwo = (another->getDims() + dims)/2;
		if (dist.x < sumDimsByTwo.x && dist.y < sumDimsByTwo.y)
			return true;
	}

	return false;
}