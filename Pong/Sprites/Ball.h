#pragma once
#ifndef __BALL__
#define __BALL__

#include <SFML/Graphics.hpp>

class Ball {
public:
	Ball(float,float);
	void draw(sf::RenderTarget*);
	void update();
	~Ball();
private:
	float currentX;
	float currentY;
	sf::CircleShape circle;
	sf::Vector2f direction;
	float velocity;
};

#endif // !__BALL__
