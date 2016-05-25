#include "PongGame.h"

PongGame::PongGame() {
	this->ball = std::make_unique<Ball>(300.f, 300.f);
	this->paddleManager = std::make_unique<PaddleManager>(600.f);
}

void PongGame::update(const sf::Event event) {
	switch (event.type) {
	case sf::Event::MouseMoved: this->paddleManager->handleEvent(event);
				break;
	}
}

void PongGame::update() {

}

void PongGame::render(sf::RenderTarget* renderer) {
	this->paddleManager->draw(renderer);
	this->ball->draw(renderer);
}

void PongGame::collisions() {

}

PongGame::~PongGame() {}
