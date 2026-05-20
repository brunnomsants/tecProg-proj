#include "../include/Principal.h"

using namespace std;
using namespace Alaska;
Principal::Principal() : window(sf::VideoMode(800.0f, 600.0f), "Alaska++"), player(sf::RectangleShape(sf::Vector2f(50.0f, 50.0f))) {
	run();
}
Principal::~Principal() {
	window.close();
}
void Principal::run() {
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		player.move();
		window.draw(player.getBody());
		window.display();
	}
}
