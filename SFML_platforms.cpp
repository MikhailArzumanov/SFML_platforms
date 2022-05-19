#include <iostream>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

sf::RenderWindow* window;

struct point {
	float x, y;
	operator sf::Vector2f() const {
		return sf::Vector2f({ x, y });
	}
	void operator>>(sf::RectangleShape shape) {
		shape.setPosition(x, y);
		window->draw(shape);
	}

	point operator-(point another) {
		return { x - another.x, y - another.y };
	}
	point operator/(float scalar) {
		return { x / scalar, y / scalar };
	}
};

const point examplePlatformDims = { 120, 12 };
const sf::Color examplePlatformColor = sf::Color(0x70, 0x70, 0x70);
sf::RectangleShape exampleRectangle = sf::RectangleShape(examplePlatformDims);

class Drawable {
protected:
	virtual void draw() = 0;
};

class Ticking {
protected:
	virtual void tick() = 0;
};

class Living {
protected:
	virtual bool is_living() = 0;
};

class Entity : Drawable, Living, Ticking {
protected:
	point p, dims;
};

class Platform : public Entity {
protected:
	Platform(point position, point dims_) {
		p = position; dims = dims_;
	}
};

class ExamplePlatform : public Platform {
public:
	ExamplePlatform(point position) : Platform(position, examplePlatformDims) {}
	void draw() {
		point lu_corner = p - dims / 2;
		lu_corner >> exampleRectangle;
	}
	void tick() {
		p.x++;
		p.y++;
	}
	bool is_living() { return true; }
};

ExamplePlatform platform = ExamplePlatform({ 0, 0 });

void tick() {
	platform.tick();
}

int main(){
	window = new sf::RenderWindow(sf::VideoMode(700, 313), "Debug window");
	exampleRectangle.setFillColor(examplePlatformColor);
	
	while (window->isOpen()) {
		sf::Event theEvent;
		while (window->pollEvent(theEvent)) {
			switch (theEvent.type) {
			case sf::Event::Closed:
				window->close();
			}
			tick();
		}

	}
}