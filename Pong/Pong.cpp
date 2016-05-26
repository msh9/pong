#include <SFML/Graphics.hpp>
#include "PongGame.h"
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Pong");
	PongGame pong;
	window.setFramerateLimit(60); 
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed: window.close();
				break;
			}
			pong.update(event);

		}
		pong.updateGameState();
		window.clear(sf::Color::Black);
		pong.render(&window);
		window.display();
	}
}