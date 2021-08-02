#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.h"
#include "Game.h"

namespace Tinkay
{
	class Bird
	{
	public:
		Bird(GameDataRef data);
		~Bird();

		void Draw();

	private:
		GameDataRef _data;

		sf::Sprite _birdSprite;

	};
}