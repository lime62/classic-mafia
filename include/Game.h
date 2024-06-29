#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Player.h"
class Game
{
private:
	bool game_started;
	size_t game_id;
	size_t host_id;
	std::string host_name;
	std::string setup_name;
	size_t player_count;
public:
	Game();
	Game(Player& p);
	std::ostream& display(std::ostream& os) const;
	size_t getId();
	void setId(size_t);
	bool startGame();
};

#endif