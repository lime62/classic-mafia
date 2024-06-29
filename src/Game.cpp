#include "../include/Game.h"

Game::Game()
{
	game_started = false;
	game_id = 0;
	host_id = 0;
	host_name = "Mafia Host";
	setup_name = "Classic";
	player_count = 7;
}

Game::Game(Player& p)
{
	game_id = 1;
	game_started = false;
	host_id = p.get_id();
	host_name = p.get_username();
	setup_name = "Classic";
	player_count = 7;
}

std::ostream& Game::display(std::ostream& os) const
{
	os << "Game ID: " << game_id << '\n';
	os << "Setup: " << setup_name << '\n';
	os << "Host Name: " << host_name << '\n';
	os << "Host Id: " << host_id << '\n';
	os << "Setup size: " << player_count << "\n\n";
	return os;
}

size_t Game::getId()
{
	return game_id;
}

bool Game::startGame()
{
	game_started = true;
	return true;
}

