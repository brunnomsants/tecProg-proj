#pragma once
#ifndef PLAYERH
#define PLAYERH
#include <iostream>
#include <SFML/Graphics.hpp>

namespace Alaska {
	namespace Player {
		class Player
		{
		private:
			sf::RectangleShape body;
			sf::Vector2f vel;
			void createPlayer();
		public:
			Player(const sf::Vector2f pos, const sf::Vector2f size);
			Player(const sf::RectangleShape body);
			Player();
			~Player();

			const sf::RectangleShape getBody() const;
			void move();

		};
	}
}
#endif // !PLAYERH

