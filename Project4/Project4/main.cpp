#include "game.h"

#include <iostream>

int main()
{
	Game game;

	game.gameStartScreen();
	while (game.getMenuRun() == true)
	{
		game.menu();
	}


	return 0;
}