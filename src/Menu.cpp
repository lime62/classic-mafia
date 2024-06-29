#include "Menu.h"

size_t Menu::count = 0;

Menu::Menu(){}

void Menu::setUsername(Player& p)
{
	std::cout << "Name Selection\n";
	std::cout << "==============\n";
	std::string temp_username;
	std::cout << "Enter username: ";
	std::cin >> temp_username;
	p.set_username(temp_username);
	std::cout << "\n";
}

void Menu::createGame(Player& p)
{
	count++;
	std::cout << "Game Creation\n";
	std::cout << "=============\n";
	Game game(p);
	game.setId(count);
	list.push_back(game);
	std::cout << "Game created!\n\n";
}

void Menu::showGames() const
{
	for (auto& game : list) {
		game.display(std::cout);
	};
}

void Menu::joinGame()
{
	if (list.size() == 0) {
		std::cout << "No available games.\n";
	}
	else {
		showGames();
		size_t tempId;
		std::cout << "Enter game ID: ";
		std::cin >> tempId;

		for (auto& game : list) {
			if (tempId == game.getId()) {
				game.startGame();
				std::cout << "Game joined.\n";
			}
		}
	}
}

void Menu::displayMenu() const
{
	std::cout << "Select an option.\n";
	std::cout << "1. Set Username.\n";
	std::cout << "2. Create Game  \n";
	std::cout << "3. Join Game    \n";
}

