#ifndef BEARHUNTERNINJA_H_
#define BEARHUNTERNINJA_H_

#include "Bhn_Moves.h"
#include "GameResults.h"
#include <iostream>
#include <cstdlib> 
class BearHunterNinja{

private:
    Bhn_Moves player_move, computer_move;
    Bhn_Moves compareMoves();
    Bhn_Moves genCompMove();
    void displayMove();
public:
    void displayRules();
    void setPlayerMove(Bhn_Moves);
    void setComputerMove(Bhn_Moves);
    
    Bhn_Moves getPlayerMove() const;
    Bhn_Moves getComputerMove() const;
};

#endif