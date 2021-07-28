#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>

namespace Tinkay
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void DrawPipes();

	private:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;

	};
}

