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
    std::cout << "Computer move: " << move_ << endl;
}

void Computer::selectMove(Rps_Moves move)
{
    Rps_Moves move = static_cast<Rps_Moves>(rand() % 3);
    setMove(move);
}

void setMove(Rps_Moves move)
{
    move_ = move;
}
