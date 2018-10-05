#include "RockPaperScissor.hpp"
#include "GameResults.hpp"



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
void RockPaperScissor::compareMoves(moves player, moves computer)
{
    player_ = player;
    comp_ = computer;

    results.setRound(1);

    switch(player_)
    {
        case moves::ROCK:
            if(comp_ == moves::ROCK) {results.setTies(1);}

            else if(comp_ == moves::PAPER)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);

            }
            else if(comp_ == moves::SCISSORS)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;

        case moves::PAPER:
            if(comp_ == moves::PAPER) {results.setTies(1);}

            else if(comp_ == moves::SCISSORS)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp_ == moves::ROCK)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;
        case moves::SCISSORS:
            if(comp_ == moves::SCISSORS) {results.setTies(1);}

            else if(comp_ == moves::ROCK)
            {
                results.addPlayerLoss(1);
                results.addCompWin(1);
            }
            else if(comp_ == moves::PAPER)
            {
                results.addPlayerWin(1);
                results.addCompLoss(1);
            }
        break;
        default:  break;
    }
}
