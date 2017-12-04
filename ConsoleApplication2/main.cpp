#include "SFML/Graphics.hpp"
#include "Implementations.h"
#include "Definitions.h"
#include <iostream>

int main()
{
	// Ablak inicializálása
	sf::RenderWindow App(sf::VideoMode(NUM_SCREEN_WIDTH, NUM_SCREEN_HEIGHT), GAME_NAME);

	// Create a clock for measuring time elapsed
	sf::Clock Clock;
	sf::Texture PlayerT;
	sf::Sprite PlayerS(PlayerT);
	SpriteStuff spritestuff;
	int red = 180;
	int green = 88;
	int blue = 154;

	// Start game loop
	while (App.isOpen())
	{
		// Process events
		sf::Event Event;
		while (App.pollEvent(Event))
		{


			// Close window : exit
			if (Event.type == sf::Event::Closed)
				App.close();

			// Escape key : exit
			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::Escape))
				App.close();

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::W)) {
				std::cout << "Forward" << std::endl;
			}

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::A)) {
				std::cout << "Left" << std::endl;
			}

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::S)) {
				std::cout << "Backwards" << std::endl;
			}

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::D)) {
				std::cout << "Right" << std::endl;
				
			}


			//Háttérszín változtatás
			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::F9)){

				red++;

			}

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::F11)) {

				green++;

			}

			if ((Event.type == sf::Event::KeyPressed) && (Event.key.code == sf::Keyboard::F10)) {

				blue++;

			}


		}
		// Finally, display rendered frame on screen
		spritestuff.SetSprite(PlayerT, PlayerS, 40, 15, 180, 180);
		App.clear(sf::Color(red, green, blue));
		App.draw(PlayerS);

		App.display();
		
		
		
	}

	return EXIT_SUCCESS;
}