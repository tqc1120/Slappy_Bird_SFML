#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.h"
#include "Game.h"
#include <vector>

namespace Tinkay
{
	class Bird
	{
	public:
		Bird(GameDataRef data);
		~Bird();

		void Draw();
		void Animate(float dt);

		void Update(float dt);
		void Tap();

	private:
		GameDataRef _data;

		sf::Sprite _birdSprite;
		std::vector<sf::Texture> _animationFrames;

		unsigned int _animationIterator;

		sf::Clock _clock;
		sf::Clock _movementClock;

		int _birdState;

	};
}