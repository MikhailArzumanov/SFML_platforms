#include "Being.hpp"



bool Being::isCollindingWith(Entity* another) {
	switch (another->getType()) {
	case anExampleBeing:
	case anExamplePlatform:
		point dist = another->getP() - p;
		point sumDimsByTwo = (another->getDims() + dims)/2;
		if (abs(dist.x) < sumDimsByTwo.x && abs(dist.y) < sumDimsByTwo.y)
			return true;
	}

	return false;
}