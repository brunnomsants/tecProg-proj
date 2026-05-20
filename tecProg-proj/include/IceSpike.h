#pragma once
#ifndef ICESPIKE
#define ICESPIKE
#include <iostream>
#include <SFML/Graphics.hpp>
namespace Alaska {
	namespace Obstacles {
		class IceSpike
		{
		private:
			sf::CircleShape body;
			sf::Vector2f pos;
			void createIceSpike();
		public:
			IceSpike(const sf::Vector2f pos, const sf::CircleShape body);
			IceSpike();
			~IceSpike();
			const sf::CircleShape& getBody() const;
			void setPosition(const sf::Vector2f pos);
		};
	}
}
#endif // !ICESPIKE