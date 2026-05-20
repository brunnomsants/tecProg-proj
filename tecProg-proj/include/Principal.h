#ifndef PRINCIPALH
#define PRINCIPALH
#include <iostream>
#include <SFML/Graphics.hpp>
#include <thread>
#include "Player.h"

namespace Alaska {
	class Principal {
	private:
		sf::RenderWindow window;
		Player::Player player;
	public:
		Principal();
		~Principal();
		void run();
	};
}

#endif // !PRINCIPAL.H
