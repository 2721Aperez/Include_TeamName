#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "Rps_Moves.hpp"
#include "Player.hpp"
#include"ChooserFactory.hpp"

class Computer : public Player
{
	// private:
	//     void snarky();
public:
	Computer();
	void generateMove();
};

#endif
