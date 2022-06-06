#include "EventPlatform.hpp"

point eventPlatformDims{120,12};

EventPlatform::EventPlatform(sf::RectangleShape* shape_, point position) : Platform(position, eventPlatformDims, shape_) {}