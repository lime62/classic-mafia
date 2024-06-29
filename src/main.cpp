#include "Menu.h"
#include "Game.h"
#include "Player.h"

#include <iostream>

int main() {
	Menu menu;
	Player player;

	size_t selection = 0u;

	std::cout << "Welcome to Mafia!\n";
	std::cout << "=================\n";

	bool gameStart = false;
	while (gameStart == false) {
		menu.displayMenu();
		std::cout << "Enter your selection: ";
		std::cin >> selection;
		std::cout << '\n';

		switch (selection) {
		case 1: menu.setUsername(player);
			break;
		case 2: menu.createGame(player);
			break;
		case 3: 
			std::cout << "Join Game\n";
			std::cout << "=========\n";
			menu.joinGame();
			gameStart = true;
			break;
		}
	}
}