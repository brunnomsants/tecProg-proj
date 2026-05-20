#include "../include/IceSpike.h"
using namespace Alaska::Obstacles;


IceSpike::IceSpike(const sf::Vector2f pos, const sf::CircleShape body) : body(body), pos(pos) {
	createIceSpike();
}
IceSpike::IceSpike() : body(), pos() {
	createIceSpike();
}
IceSpike::~IceSpike() {
}
void IceSpike::createIceSpike() {
	body.setFillColor(sf::Color::Blue);
	body.setPosition(pos);
}
const sf::CircleShape& IceSpike::getBody() const {
	return body;
}

void IceSpike::setPosition(const sf::Vector2f pos) {
	this->pos = pos;
	body.setPosition(pos);
}