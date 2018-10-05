#ifndef PLAYER_H_
#define PLAYER_H_

#include "RockPaperScissor.hpp"
#include "Rps_Moves.hpp"
#include <cstdlib>

class Player
{
private:
	moves move_;

public:
	Player();
	moves getMove() const;
	void setMove(moves);
	void displaySelectedMove();
};
#endif
