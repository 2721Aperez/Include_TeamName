#include "Computer.hpp"
#include <cstdlib>

Computer::Computer()
{

}

Rps_Moves Computer::getMove() const
{
    return move_;
}

void Computer::displaySelectedMove()
{
    std::cout << "Computer move: " << move_ << std::endl;
}

void Computer::selectMove()
{
//	int numb = rand()%2;
//	Rps_Moves move;

//	switch(numb)
//	{
//	case 1:
//		move = Rps_Moves::ROCK;
//	break;
//	case 2:
//		move = Rps_Moves::PAPER;
//	break;
//	case 3:
//		move = Rps_Moves::SCISSORS;
//	break;
//	default: move = Rps_Moves::PAPER;
//		break;
//	}
	Rps_Moves move = static_cast<Rps_Moves>(rand() % 2);

    setMove(move);
}

void Computer::setMove(Rps_Moves move)
{
    move_ = move;
}
