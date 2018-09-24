#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "RockPaperScissor.hpp";

#include <string>
class Computer 
{
private: 
    RockPaperScissor move;

    void displaySelectedMove();
    // std::string snarkyComment();
public:
    void selectMove(); 

};
#endif