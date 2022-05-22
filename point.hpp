#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include "window.hpp"

struct point {
	float x, y;

	float getSqrDist() {
		return x*x + y*y;
	}

	operator sf::Vector2f() const {
		return sf::Vector2f({ x, y });
	}

	void operator>>(sf::RectangleShape& shape) {
		shape.setPosition(x, y);
		window->draw(shape);
	}
	void operator>>(sf::RectangleShape* shape) {
		shape->setPosition(x, y);
		window->draw(*shape);
	}

	point operator+(point another) {
		return { x + another.x, y + another.y };
	}
	point operator-(point another) {
		return { x - another.x, y - another.y };
	}
	point operator/(float scalar) {
		return { x / scalar, y / scalar };
	}
};