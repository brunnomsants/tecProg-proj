#pragma once
#ifndef PLATFORMH
#define PLATFORMH
#include <iostream>
#include <SFML/Graphics.hpp>
namespace Alaska {
	namespace Obstacles {
		class Platform
		{
		private:
			sf::RectangleShape body;
			sf::Vector2f pos;
			void createPlatform();
		public:
			Platform(const sf::Vector2f pos, const sf::Vector2f size);
			Platform(const sf::Vector2f pos, const sf::RectangleShape body);
			Platform();
			~Platform();
			const sf::RectangleShape& getBody() const;
			void setPosition(const sf::Vector2f pos);
		};
	}
}
#endif // !PLATFORMH
