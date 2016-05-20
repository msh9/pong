#include "PaddleManager.h"

PaddleManager::PaddleManager(float height) {
	this->left = make_unique<Paddle>(0.f, height / 2.f);
	this->right = make_unique<Paddle>(585.f, height / 2.f);
}

void PaddleManager::handleEvent(const sf::Event event) {
	if (event.type == sf::Event::MouseMoved) {
		if (event.mouseMove.x <= 300) {
			this->left->setPosition((float)event.mouseMove.y);
		}
		else if (event.mouseMove.x >= 300) {
			this->right->setPosition((float)event.mouseMove.y);
		}
	}
}

void PaddleManager::draw(sf::RenderTarget* renderer) {
	this->left->draw(renderer);
	this->right->draw(renderer);
}


PaddleManager::~PaddleManager() {}
