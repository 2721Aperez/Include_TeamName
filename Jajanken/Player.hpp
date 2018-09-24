#ifndef PLAYER_H_
#define PLAYER_H_

#include "RockPaperScissor.hpp";


class Player 
{
private: 
    RockPaperScissor move;

    void displaySelectedMove();
public:
    // void selectGameMode();
    void requestRules();
    void selectMove();
};
#endif