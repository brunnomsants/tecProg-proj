#ifndef PRINCIPALH
#define PRINCIPALH
#include <iostream>
#include <SFML/Graphics.hpp>

namespace Alaska {
	class Principal {
	private:
		sf::RenderWindow window;
	public:
		Principal();
		~Principal();
		void run();
	};
}

#endif // !PRINCIPAL.H
