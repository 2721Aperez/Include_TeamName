#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "RockPaperScissor.hpp";
#include "BearHunterNinja.hpp";
#include <string>
class Computer 
{
private: 
    RockPaperScissor move;
    BearHunterNinja move_v2;
    void displaySelectedMove();
    // std::string snarkyComment();
public:
    void selectMove(); 
    void selectMoveV2();
};
#endif