#ifndef ROCKPAPERSCISSOR_H_
#define ROCKPAPERSCISSOR_H_

#include "Rps_Moves.hpp"
#include "Player.hpp"
#include "Computer.hpp"

class RockPaperScissor{
private:
    Rps_Moves player_;
    Rps_Moves comp_;
    void setMoves();
    Rps_Moves compareMoves();
public:
    RockPaperScissor(); 
    void displayRules();
};
#endif
