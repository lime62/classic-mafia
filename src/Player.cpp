#include "Player.h"

size_t Player::count = 0;

Player::Player() : username("Mafia Player")
{
	id = 0;
	count++;
	set_id(count);
}

void Player::set_username(std::string username)
{
	this->username = username;
}

void Player::set_id(size_t id)
{
	this->id = id;
}
 
std::string Player::get_username() const
{
	return username;
}

size_t Player::get_id() const
{
	return id;
}
