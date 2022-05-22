#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include "window.hpp"

struct point {
	float x, y;
	operator sf::Vector2f() const {
		return sf::Vector2f({ x, y });
	}
	void operator>>(sf::RectangleShape* shape) {
		shape->setPosition(x, y);
		window->draw(*shape);
	}
	void operator+=(const point another){
		x += another.x;
		y += another.y;
	}
	point operator+(const point another) const{
		return { x + another.x, y + another.y };
	}
	point operator-(const point another) const{
		return { x - another.x, y - another.y };
	}
	point operator*(const float scalar) const{
		return { x * scalar, y * scalar };
	}
	point operator/(const float scalar) const{
		return { x / scalar, y / scalar };
	}
};