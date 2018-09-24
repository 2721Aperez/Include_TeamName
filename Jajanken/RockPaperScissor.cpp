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

Rps_Moves RockPaperScissor::genCompMove()
{
    Rps_Moves move = static_cast<Rps_Moves>(rand() % 3); 
    return move;
} 
void RockPaperScissor::setComputerMove() 
{
    Rps_Moves computer = genCompMove();
    computer_move = computer;
}

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
                results.addPlayerLoss(1);
                results.addCompWin(1);
                
            }
            else if(comp == Rps_Moves::SCISSORS)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);          
            }
        break;

        case Rps_Moves::PAPER:
            if(comp == Rps_Moves::PAPER) {results.setTies(1);}

            else if(comp == Rps_Moves::SCISSORS)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp == Rps_Moves::ROCK)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);          
            }
        break;
        case Rps_Moves::SCISSORS:
            if(comp == Rps_Moves::SCISSORS) {results.setTies(1);}

            else if(comp == Rps_Moves::ROCK)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp == Rps_Moves::PAPER)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);          
            }
        break;
        default:  break;
    }

    return player; //Placeholder

}