#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "RockPaperScissor.hpp";
#include "Rps_Moves.hpp"
#include <string>

class Computer 
{
private: 
    RockPaperScissor move;
    // std::string snarkyComment();
public:
    Rps_Moves getMove();
    void setMove(Rps_Moves);
    void displaySelectedMove();
    void selectMove(Rps_Moves);


};
#endif