#ifndef ROCKPAPERSCISSOR_H_
#define ROCKPAPERSCISSOR_H_

#include "Rps_Moves.h"
class RockPaperScissor{
private:
    Rps_Moves player_move, computer_move;
    Rps_Moves compareMoves();
    void setComputerMove(Rps_Moves computer_move);
    void displayMoves();

public:
    void displayRules();
    void setPlayerMove(Rps_Moves player_move);
    
    Rps_Moves genCompMove();
    Rps_Moves getPlayerMove() const;
    Rps_Moves getComputerMove() const;

};
#endif