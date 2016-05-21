#include "PongGame.h"

PongGame::PongGame() {
	this->ball = std::make_unique<Ball>(300.f, 300.f);
	this->paddleManager = std::make_unique<PaddleManager>(600.f);
}

void PongGame::update(sf::RenderTarget* renderer, const sf::Event event) {
	
}

void PongGame::update(sf::RenderTarget* renderer) {

}

PongGame::~PongGame() {}
