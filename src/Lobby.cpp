#include "../include/Lobby.h"

size_t Lobby::count = 0;

Lobby::Lobby()
{
	count++;
	id = 0;
}

Lobby::Lobby(Setup s)
{
	count++;
	id = 0;
	setup = s;
}

void Lobby::start_lobby()
{
	system("cls");
	std::cout << "Lobby Started.\n";
}

void Lobby::initialize_players(Player& p)
{
	player_list.push_back(p);
	//Add the Bots
	for (int i = 0; i < 6; i++) {
		Bot b;
		std::string bot_name = "Bot " + std::to_string(i + 1);
		b.set_username(bot_name);
		player_list.push_back(b);
	}
}

void Lobby::display_list() const
{
	std::cout << "Player List\n";
	std::cout << "===========\n";
	for (auto& player : player_list) {
		std::cout << player.get_username() << '\n';
	}
	std::cout << '\n';
}

void Lobby::set_id(size_t id)
{
	this->id = id;
}
