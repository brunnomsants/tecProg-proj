#include "../include/Principal.h"

using namespace std;
using namespace Alaska;
Principal::Principal() : window(sf::VideoMode(800.0f, 600.0f), "Alaska++"), player(sf::RectangleShape(sf::Vector2f(50.0f, 50.0f))), terrain(sf::Vector2f(0.1f, 500.0f), sf::RectangleShape(sf::Vector2f(800.0f, 100.0f))) {
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
		window.draw(terrain.getBody());
		cout << "Player position: " << player.getBody().getPosition().x << ", " << player.getBody().getPosition().y << endl;
		if (player.getBody().getGlobalBounds().intersects(
			terrain.getBody().getGlobalBounds()))
		{
			player.setPosition(
				player.getBody().getPosition().x,
				terrain.getBody().getPosition().y
				- player.getBody().getSize().y
			);
		}
		window.display();
	}
}
