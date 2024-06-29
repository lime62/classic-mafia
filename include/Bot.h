#ifndef BOT_H
#define BOT_H

#include <string>
#include "Player.h"
class Bot : public Player
{
private:
  std::string phrases[40];
public:
	Bot();
};

#endif