#pragma once
#ifndef __PADDLE_MANAGER__
#define __PADDLE_MANAGER__
#include "Paddle.h"
#include "SFML/Graphics.hpp"
#include <memory>

using namespace std;
class PaddleManager {
public:
	PaddleManager(float);
	void handleEvent(const sf::Event);
	void draw(sf::RenderTarget*);
	~PaddleManager();
private:
	unique_ptr<Paddle> left;
	unique_ptr<Paddle> right;
};

#endif // !__PADDLE_MANAGER__