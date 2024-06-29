#ifndef LOBBY_H
#define LOBBY_H

#include <iostream>
#include <vector>
#include "Player.h"
#include "Setup.h"
#include "stdlib.h"
#include "Bot.h"

class Lobby
{
private:
	static size_t count;
	size_t id;
	//Player List
	std::vector<Player> player_list;
	//Setup List
	Setup setup;
	//Will be a continous loop until player count = 7
	//Chat log // a text file of player: message
	//Input Text: an input that writes to the file, gets updated every time someone writes then gets read to the output
public:
	Lobby();
	Lobby(Setup s);
	void start_lobby();
	void initialize_players(Player& p);
	void display_list() const;
	void set_id(size_t id);
};

#endif