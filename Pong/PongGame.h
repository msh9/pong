#pragma once
#ifndef __PONG_GAME__
#define __PONG_GAME__
#include <SFML/Graphics.hpp>
#include "Sprites/Sprites.h"
#include <memory>
/*
PongGame is the primary interface for SFML event loop to call into in order to update the game state.
*/
class PongGame {
public:
	PongGame();
	/*
	updates the game state based on the input event
	*/
	void update(const sf::Event);
	/*
	updates the game state in absence of any input events
	*/
	void updateGameState();
	/*
	render is called with SFML RenderTarget, use this to draw current game state
	*/
	void render(sf::RenderTarget*);
	~PongGame();
private:
	std::unique_ptr<PaddleManager> paddleManager;
	std::unique_ptr<Ball> ball;
	void collisions();
};


#endif // !__PONG_GAME__
