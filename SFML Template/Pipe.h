#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>
#include "DEFINITIONS.h"

namespace Tinkay
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void SpawnBottomPipe();
		void SpawnTopPipe();
		void SpawnInvisiblePipe();
		void MovePipes(float dt);
		void DrawPipes();
		void RandomisePipeOffset();

	private:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;

		int _landHeight;
		int _pipeSpawnYOffset;

	};
}

