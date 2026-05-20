#include "../include/Platform.h"
using namespace Alaska::Obstacles;

Platform::Platform(const sf::Vector2f pos, const sf::Vector2f size) : body(sf::Vector2f(size)), pos(pos) {
	createPlatform();
}
Platform::Platform(const sf::Vector2f pos, const sf::RectangleShape body) : body(body), pos(pos) {
	createPlatform();
}
Platform::Platform() : body(), pos() {
	createPlatform();
}
Platform::~Platform() {
}
void Platform::createPlatform() {
	body.setFillColor(sf::Color::Green);
	body.setPosition(pos);
}
const sf::RectangleShape& Platform::getBody() const {
	return body;
}