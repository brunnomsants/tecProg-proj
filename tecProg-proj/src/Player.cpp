#include "../include/Player.h"

using namespace Alaska::Player;

Player::Player(const sf::Vector2f pos, const sf::Vector2f size): body(sf::Vector2f(size)), vel(sf::Vector2f(0.1f, 0.1f)) {
	body.setPosition(pos);
	createPlayer();
}
Player::Player(const sf::RectangleShape body): body(body), vel(sf::Vector2f(0.1f, 0.1f)) {
	createPlayer();
}
Player::Player(): body() {
	createPlayer();
}
Player::~Player() {
}
void Player::createPlayer() {
	vel = sf::Vector2f(0.1f, 0.1f);
	body.setFillColor(sf::Color::Cyan);
}
const sf::RectangleShape& Player::getBody() const {
	return body;
}
void Player::setPosition(float x, float y) {
	body.setPosition(x, y);
}
void Player::move() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		body.move(-vel.x, 0.0f);
	}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		body.move(vel.x, 0.0f);
	}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		body.move(0.0f, -vel.y);
	}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		body.move(0.0f, vel.y);
	}
}