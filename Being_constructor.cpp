#include "Being.hpp"



Being::Being(point position, point dims_, sf::Drawable* image_) :Entity(position, dims_) {
	image = image_;
}