#ifndef PRINCIPALH
#define PRINCIPALH
#include <iostream>
#include <SFML/Graphics.hpp>
#include <thread>
#include "Player.h"
#include "Platform.h"
#include "IceSpike.h"

namespace Alaska {
	class Principal {
	private:
		sf::RenderWindow window;
		Player::Player player;
		Obstacles::Platform terrain;
		Obstacles::IceSpike spike;
	public:
		Principal();
		~Principal();
		void run();
	};
}

#endif // !PRINCIPAL.H
