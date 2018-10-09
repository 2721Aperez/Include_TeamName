#ifndef HUMAN_H_
#define HUMAN_H_

#include "Player.hpp"

class human :public Player
{
public:
	human();
	void selectMove(moves);
};

#endif
