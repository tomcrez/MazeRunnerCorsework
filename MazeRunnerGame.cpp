#include "Game.h"

int main()
{
	srand(time(static cast<unsigned>(0)));

	Game game;

	while (game.getWindow().isOpen())
	{
		game.update();
		game.render();
	}

	return 0;

}
