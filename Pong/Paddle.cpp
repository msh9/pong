#include "Paddle.h"

Paddle::Paddle(float x, float initialY): xPosition(x) {
	this->paddleGraphic.setSize(sf::Vector2f(this->paddleWidth, this->paddleHeight));
	this->paddleGraphic.setOrigin(sf::Vector2f(0.f, this->paddleHeight / 2.f));
	this->paddleGraphic.setPosition(x, initialY);
}

void Paddle::setPosition(float y) {
	this->paddleGraphic.setPosition(this->xPosition, y);
}

void Paddle::draw(sf::RenderTarget* renderer) {
	renderer->draw(this->paddleGraphic);
}

Paddle::~Paddle() { }