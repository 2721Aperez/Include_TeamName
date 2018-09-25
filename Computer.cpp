#include "Computer.hpp"
#include <algorithm> //do we need these last two libraries?
#include <cstdlib>

 Rps_Moves Computer::getMove()
 {
     return move;
 }

 void Computer::displaySelectedMove()
 {
     std::cout << "Computer move: " << move;
 }

 void Computer::selectMove(Rps_Moves move)
 {
     switch(move){
         case ROCK:
             setMove(ROCK);
             break;
         case PAPER:
             setMove(PAPER);
             break;
         case SCISSOR:
             setMove(SCISSOR);
             break;
         default: break;
     }

 }

 void setMove(Rps_Moves move)
 {
     move = move;
 }
