#include "Ball.h"
#include <random>

Ball::Ball(float initialX, float initialY): currentX(initialX), currentY(initialY) {
	this->circle.setFillColor(sf::Color::White);
	this->circle.setOrigin(8.f, 8.f);
	this->circle.setPosition(initialX, initialY);
	this->circle.setRadius(8.f);

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> directionDistribution(-1, 1);
	this->direction.x = directionDistribution(gen);
	this->direction.y = directionDistribution(gen);

	this->velocity = 5.f;
}

void Ball::draw(sf::RenderTarget* renderer) {
	renderer->draw(this->circle);
}

void Ball::update() {
	auto currentPosition = this->circle.getPosition();
	sf::Vector2f dx(this->direction);
	dx = dx * this->velocity;
	this->circle.setPosition(currentPosition + dx);
}


Ball::~Ball() {}
