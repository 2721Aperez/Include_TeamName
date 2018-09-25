#include "GameResults.hpp"

 void GameResults::setPlayerWins(int win)
 {
    player_wins = wins;
 }

 void GameResults::setPlayerLoss(int lose)
 {
    player_loss = lose;
 }

 void GameResults::addPlayerWin(int win)
 {
    player_wins += win;
 }

 void GameResults::addPlayerLoss(int lose)
 {
    player_loss += lose;
 }

 void GameResults::addCompWin(int win)
 {
    comp_wins += win;
 }

 void GameResults::addCompLoss(int lose)
 {
    comp_loss++;
 }

 void GameResults::setCompWins(int win)
 {
    comp_wins += win;
 }

 void GameResults::setCompLoss(int lose)
 {
    comp_loss += lose;
 }


 void GameResults::setRound(int round)
 {
     round += round;
 }

 void GameResults::displayResults()
 {
     if(player_wins > comp_wins){
      std::cout << "Player wins with a score of " << getPlayerWins() " to " << getCompWins() <<"!";
     }
     else if(comp_wins > player_wins){
      std::cout << "Computer wins with a score of " << getCompWins() " to " << getPlayerWins() <<"!";
     }
     else{
      std::count << "Game tied with both the player and computer having " << getPlayerWins() << " wins.";
     }
 }

 void GameResults::displayRounds()
 {
    std::cout << "Round: " << round;
 }

 int GameResults::getPlayerWins() const
 {
    return player_wins;
 }

 int GameResults::getPlayerLoss() const
 {
    return player_loss;
 }

 int GameResults::getCompWins() const
 {
    return comp_wins;
 }

 int GameResults::getCompLoss() const
 {
    return comp_loss;
 }

 void GameResults::setTies(int ties)
 {
    ties += ties;
 }

 int GameResults::getTies() const
 {
    return ties;
 }