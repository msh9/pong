#include <SFML/Graphics.hpp>
#include "PaddleManager.h"
#include "Ball.h"
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Pong");
	PaddleManager paddleManager(600.f);
	Ball ball(300.f, 300.f);
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed: window.close();
				break;
			case sf::Event::MouseMoved: paddleManager.handleEvent(event);
				break;
			}
		}
		window.clear(sf::Color::Black);
		paddleManager.draw(&window);
		ball.draw(&window);
		window.display();
	}
}