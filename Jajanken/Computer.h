#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "RockPaperScissor.h";
#include "BearHunterNinja.h";
#include <string>
class Computer 
{
private: 
    RockPaperScissor move;
    BearHunterNinja move_v2;
    void displaySelectedMove();
    std::string snarkyComment();
public:
    void selectMove(); 
    void selectMoveV2();
};
#endif