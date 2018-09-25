#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "Rps_Moves.hpp"
#include <iostream>
#include <string>

class Computer
{
private:
    Rps_Moves move_;
    // std::string snarkyComment();
    void setMove(Rps_Moves);
public:
    Computer();
    Rps_Moves getMove() const;
    void selectMove();
    void displaySelectedMove();
};
#endif
