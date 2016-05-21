#pragma once
#ifndef __BALL__
#define __BALL__

#include <SFML/Graphics.hpp>

class Ball {
public:
	Ball(float,float);
	void draw(sf::RenderTarget*);
	~Ball();
private:
	float currentX;
	float currentY;
	sf::CircleShape circle;
};

#endif // !__BALL__
