#include "human.hpp"

human::human(){}

void human::selectMove(Rps_Moves move)
{ 
    switch(move)
    {
        case Rps_Moves::ROCK:
            setMove(Rps_Moves::ROCK);
            break;
        case Rps_Moves::PAPER:
            setMove(Rps_Moves::PAPER);
            break;
        case Rps_Moves::SCISSORS:
            setMove(Rps_Moves::SCISSORS);
            break;
        default:
            break;
    }
}