#include "RockPaperScissor.hpp"
#include "GameResults.hpp"
#include <string>
#include <iostream>

RockPaperScissor::RockPaperScissor()
{}

void RockPaperScissor::displayRules()
{
    std::cout << "Rock beats Scissors" << std::endl;
    std::cout << "Scissors beats Paper" << std::endl;
    std::cout << "Paper beats Rock" << std::endl;
    std::cout<<'\n' << std::endl;
}
void RockPaperScissor::showEndGame(){results.displayResults();}
void RockPaperScissor::showGame() {results.displayRounds();}
void RockPaperScissor::compareMoves(Rps_Moves player, Rps_Moves computer)
{
    player_ = player;
    comp_ = computer;

    results.setRound(1);

    switch(player_)
    {
        case Rps_Moves::ROCK:
            if(comp_ == Rps_Moves::ROCK) {results.setTies(1);}

            else if(comp_ == Rps_Moves::PAPER)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);

            }
            else if(comp_ == Rps_Moves::SCISSORS)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;

        case Rps_Moves::PAPER:
            if(comp_ == Rps_Moves::PAPER) {results.setTies(1);}

            else if(comp_ == Rps_Moves::SCISSORS)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp_ == Rps_Moves::ROCK)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;
        case Rps_Moves::SCISSORS:
            if(comp_ == Rps_Moves::SCISSORS) {results.setTies(1);}

            else if(comp_ == Rps_Moves::ROCK)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp_ == Rps_Moves::PAPER)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;
        default:  break;
    }
}
