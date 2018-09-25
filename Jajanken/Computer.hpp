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
public:
    Computer(); 
    Rps_Moves getMove() const;
    void setMove(Rps_Moves);
    void selectMove(Rps_Moves);
    void displaySelectedMove();
};
#endif
