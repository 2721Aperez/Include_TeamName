#ifndef ROCKPAPERSCISSOR_H_
#define ROCKPAPERSCISSOR_H_

#include "Rps_Moves.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "GameResults.hpp"

class RockPaperScissor{
private:
    Rps_Moves player_;
    Rps_Moves comp_;
    GameResults results;
//    void setMoves();
public:
    void compareMoves(Rps_Moves, Rps_Moves);
    RockPaperScissor();
    void displayRules();
};
#endif
