#ifndef PLAYER_H_
#define PLAYER_H_

#include "RockPaperScissor.hpp"
#include "Rps_Moves.hpp"

class Player
{
private:
    Rps_Moves move_;

public:
    Player();
    Rps_Moves getMove() const;
    void setMove(Rps_Moves);
    void displaySelectedMove(); 
};
#endif
