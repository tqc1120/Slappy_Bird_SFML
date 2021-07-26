#include <SFML/Graphics.hpp>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main()
{
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "AWESOME GAME");

	while (window.isOpen())
	{
		// handle events

		// update game logic

		// draw
		window.clear();

		// draw SFML objects

		window.display();
	}

	return EXIT_SUCCESS;
}
