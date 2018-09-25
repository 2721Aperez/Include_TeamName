#include "Computer.hpp"
#include <algorithm> //do we need these last two libraries?
#include <cstdlib>

Rps_Moves Computer::getMove() const
{
    return move_;
}

void Computer::displaySelectedMove()
{
    std::cout << "Computer move: " << move_ << endl;
}

void Computer::selectMove(Rps_Moves move)
{
    move = static_cast<Rps_Moves>(rand() % 3);
    setMove(move); 
}

void setMove(Rps_Moves move)
{
    move_ = move; 
}
