#include "Platform.hpp"
Platform::Platform(point position, point dims_, sf::RectangleShape* shape_):Entity(position,dims_){
	shape = shape_;
}