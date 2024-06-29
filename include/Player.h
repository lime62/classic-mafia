#ifndef PLAYER_H
#define PLAYER_H

#include <string>
class Player
{
private:
	static size_t count;
  size_t id;
	std::string username;
public:
	Player();
	void set_username(std::string u);
	void set_id(size_t id);
	std::string get_username() const;
	size_t get_id() const;
};

#endif