#ifndef MENU_H
#define MENU_H


#include <iostream>
#include <vector>
#include "Game.h"
#include "Player.h"

class Menu
{
private:
	//Holds the list of games.
	std::vector<Game> list;
	static size_t count;
public:
	Menu();
	void setUsername(Player& p);
	void createGame(Player& p);
	//Helper function to join games
	void showGames() const;
	void joinGame();
	void displayMenu() const;
};

#endif