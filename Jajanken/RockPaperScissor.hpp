#ifndef ROCKPAPERSCISSOR_H_
#define ROCKPAPERSCISSOR_H_

#include "Rps_Moves.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "GameResults.hpp"

class RockPaperScissor{
private:
    moves player_;
    moves comp_;
    GameResults results;
public:
    void compareMoves(moves, moves);
    RockPaperScissor();
    void displayRules();
    void showEndGame();
    void showGame();
};
#endif
