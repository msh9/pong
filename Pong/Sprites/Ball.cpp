#include "Ball.h"

Ball::Ball(float initialX, float initialY): currentX(initialX), currentY(initialY) {
	this->circle.setFillColor(sf::Color::White);
	this->circle.setOrigin(8.f, 8.f);
	this->circle.setPosition(initialX, initialY);
	this->circle.setRadius(8.f);
}

void Ball::draw(sf::RenderTarget* renderer) {
	renderer->draw(this->circle);
}


Ball::~Ball() {}
