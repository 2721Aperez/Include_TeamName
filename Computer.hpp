#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "Player.hpp"
#include "Rps_Moves.hpp"
#include "ChooserFactory.hpp"


class Computer : public Player
{
	// private:
	//     void snarky();
public:
	Computer();
	void generateMove();
	friend ChooserInterface *ChooserFactory::make_chooser(std::string);
	void setInterface(std::string);
};

#endif
