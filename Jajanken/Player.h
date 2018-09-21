#ifndef PLAYER_H_
#define PLAYER_H_

#include "RockPaperScissor.h";
#include "BearHunterNinja.h";

class Player 
{
private: 
    RockPaperScissor move;
    BearHunterNinja move_v2;
    void displaySelectedMove();
public:
    void selectGameMode();
    void requestRules();
    void selectMove();
};
#endif