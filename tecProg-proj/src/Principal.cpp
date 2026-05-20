#include "../include/Principal.h"
#include <SFML/Graphics.hpp>

Alaska::Principal::Principal() : window(sf::VideoMode(800.0f, 600.0f), "Alaska++") {
	run();
}
Alaska::Principal::~Principal() {
	window.close();
}
void Alaska::Principal::run() {
	while (window.isOpen()) {
		sf::Event event;
		if (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
	}
}
