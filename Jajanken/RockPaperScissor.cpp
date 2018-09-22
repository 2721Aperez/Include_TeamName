#include "RockPaperScissor.h"
#include "string"
#include "GameResults.h"
#include <iostream>

void RockPaperScissor::displayRules()
{
    std::cout <<"Rock beats Scissors" <<std::endl;
    std::cout <<"Scissors beats Paper" << std::endl;
    std::cout <<"Paper beats Rock" << std::endl;
}

void RockPaperScissor::setPlayerMove(Rps_Moves player) {player_move = player;}

void RockPaperScissor::setComputerMove(Rps_Moves computer) {computer_move = computer;}

Rps_Moves RockPaperScissor::getComputerMove()const {return computer_move;}

Rps_Moves RockPaperScissor::getPlayerMove()const {return player_move;}

Rps_Moves RockPaperScissor::compareMoves()
{
    Rps_Moves player, comp, winner;
    GameResults results;

    player = getPlayerMove();
    comp = getComputerMove();

    switch(player)
    {
        case Rps_Moves::ROCK:
            if(comp == Rps_Moves::ROCK) {results.setTies(1);}
            else if(comp == Rps_Moves::PAPER)
            {
                
            }
            else if(comp == Rps_Moves::SCISSORS)
            {
                
            }
        break;

    }

}