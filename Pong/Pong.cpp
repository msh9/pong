#include <SFML/Graphics.hpp>
#include "PongGame.h"
#include <chrono>
#include <ratio>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Pong");
	PongGame pong;

	/*
	Game state is updated at ~30Hz
	Draw frequency is however fast it goes
	*/
	const int stateUpdateHertz = 30;
	const chrono::duration <int, ratio<1, stateUpdateHertz>> oneThirtySecond(1);
	auto nextStateUpdateTime = chrono::steady_clock::now() + oneThirtySecond;
	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed: window.close();
				break;
			}
			pong.update(event);

		}
		//Naive implementation, we assume the outer loop executes fast enough
		//that it's reasonable to just update state as soon as we pass the marker
		//for the next state update
		if (chrono::steady_clock::now() > nextStateUpdateTime) {
			pong.updateGameState();
			nextStateUpdateTime = chrono::steady_clock::now() + oneThirtySecond;
		}
		window.clear(sf::Color::Black);
		pong.render(&window);
		window.display();
	}
}