#pragma once
#ifndef __PADDLE__
#define __PADDLE__

#include <SFML/Graphics.hpp>
using namespace std;

class Paddle {
public:
	Paddle(float, float);
	~Paddle();
	void setPosition(float);
	void draw(sf::RenderTarget*);

private:
	const float paddleWidth = 15.f;
	const float paddleHeight = 60.f;
	float xPosition;
	sf::RectangleShape paddleGraphic;

};


#endif // !__PADDLE__